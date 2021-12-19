/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
   
    printf("Enter the number of vertex: ");
    scanf("%d", &a);

    
    int vertex[a][a-1];
    int dist[a][a-1];
    int nu[a+1];
    
    
    int distance[a+1];


   
    
    for(int j =0; j<=a+1;j++){
            
            distance[j] = 100;
    }


    


    for(int i=0; i<a;i++){

        printf("Enter the number of connected vertexes with %d: ",i+1);
        scanf("%d",&nu[i+1]);

        printf("\nEnter the connected vertexes: \n");

        for(int j=0; j<nu[i+1]; j++)
        {
            scanf("%d", &vertex[i][j]);

        }
        printf("\nEnter the distant of vertexes in oder: \n");

        for(int j =0; j<nu[i+1]; j++)
        {
            scanf("%d", &dist[i][j]);

        }
    }




    
     printf("\n\n-------------------------------------\n");
    printf("vertex\n");
    for(int i = 0; i < a; ++i)
    {
     printf("%d   |",i);
     for(int j = 0; j < nu[i+1]; ++j)
     {


          printf(" %d |", vertex[i][j]);

     }
     printf("\n----------------------------\n");
     
     printf("distance\n");
     
     printf("%d   |",i);
     for(int j = 0; j < nu[i+1]; ++j)
     {


          printf(" %d |", dist[i][j]);

     }
     printf("\n----------------------------\n");
    }

    
    int start;
    printf("Enter the number of starting vertex ");
        scanf("%d",&start);
        
    
    int prec[a+1];    



    prec[start] = start;
    distance[start] = 0;


    int min = distance[start];
    int k = 1;

    
         
        
         
        
    do{
         
        
         
        for(int i=0; i <nu[start];i++){
            if(distance[vertex[start-1][i]] > min + dist[start-1][i]){
                distance[vertex[start-1][i]] =min +  dist[start-1][i];
                prec[vertex[start-1][i]] = start;

            }
        }
        int strt = start;
        for(int i=1; i <=a;i++){
            if(distance[i] >  distance[start])
            {
                min = distance[i];
                strt = i;
                break;
            }
        }
            
       
       
       for(int i=0; i <=a;i++){
            if(distance[i+1] >  distance[start])
            {
                if(distance[i+1] < min ){
                     min = distance[i+1];
                     strt =i+1;
               } 
           }
            
       }
       start = strt;
      
        
        
         k++;
    		    
    		}
        while( k != a);
        
        printf("|   |");
        

        for(int j=1;j< a+1;j++){
                
            printf("%d ",j);           
           }
            printf("\n--------------------------------\n");
           
        printf("Prec ");
              
    
        for(int j=1;j< a+1;j++){
                
            printf("%d ",prec[j]);           
           }
        
        printf("\n--------------------------------\n");
        printf("dist ");
        for(int j=1; j< a+1;j++){
                
            printf("%d ",distance[j]);
}
}





# Dijkstra-s-algorithm
Dijkstra’s algorithm in c programming language
We know that we have the shortest path between two vertices
Thus any other path will be longer or of the same length
Let’s say that not just any fragment of the shortest path between two vertices is a shortest path between its ends
Then there is a fragment that is not a shortest path, therefore, there is a shorter one
What if we went through this shorter path and not through the original fragment?
Then we’d get a shorter path between original vertices
But it doesn’t exist (we had a shortest path) – we get a contradiction
Thus such fragment doesn’t exist – Q.E.D.

In the Dijkstra’s algorithm we’ll increase the set of vertices the distance to which has been “finalized”
Which vertices will belong to it in the beginning?
Why?

Given: the graph and starting vertex
At first we know the distance from the starting vertex to itself (zero, through itself)
It will be in the abovementioned set (of the vertices with known distances from the starting one)
Distance to other vertices is not known yet
What value should it get then!

During each step:
We find the vertex that has the “finalized” distance
We add it to the set of vertices with known distances
We update the estimates of distances to other vertices (for vertices without finalized distances)

How can we find the vertex with “finalized” distance?
How will we update the estimates?

We’ll start from the second question

We have d[v] – the estimate of distance to v
We have d[t] – the estimate of distance to t
Distance to t became known
How is d[v] to be updated?
One of paths from starting vertex s to v can go from s to t and through edge (t, v)
If it is shortest, we’ll go from s to t in d[t]
If the resulting path is shorter than d[v], its distance will be the new estimate
Otherwise the estimate won’t change

It’s the vertex with the least distance estimate
From the vertices that didn’t have the “finalized” distance estimates yet
Why?
We know that if we’ll reach this vertex (let’s mark it “t”) if we’ll go from one of the “finalized” vertices by one edge
But perhaps we’ll reach it even faster through two, three, four edges?
No, for at first we’ll have to go to some other vertex by one edge – and that vertex is further than t
Otherwise we would have chosen it
And then we’ll have to add additional path that has non-negative weight
For there are no negative weights in the graph

We’ll need an array (“d”) for distance estimates
We’ll need an array (“prec”) for paths
In other words, where did we came to given vertex – “preceding” vertex
The path will be found just as in case of breadth-first-search


https://www.onlinegdb.com/ go this website and paste this code.
run the code and type the number that how many vertexes has in your graph
now type number that how many vertexes is onnected to vertex number 1.
now write all the vertex number that is connected to the vertex 1 and distance.

**AIM:**
To find the minimum cost spanning tree of a given undirected graph using Kruskal's Algorithm
<br><br>
**TIME COMPLEXITY:** O(E log E or E log V)

**SPACE COMPLEXITY:** O(|E| + |V|)

E -> number of edges in graph

V -> number of vertices in graph
<br><br>
**OUTPUT:**

Enter the no. of vertices : 7
<br><br>
Enter the cost adjacency matrix :

0 1 5 0 0 0 0

1 0 4 8 7 0 0

5 4 0 6 0 2 0

0 8 6 0 11 9 0

0 7 0 11 0 3 10

0 0 2 9 3 0 12

0 0 0 0 10 12 0
<br><br>
The edges of Minimum Cost Spanning Tree are:

Edge : 1(1,2) cost : 1

Edge : 2(3,6) cost : 2

Edge : 3(5,6) cost : 3

Edge : 4(2,3) cost : 4

Edge : 5(3,4) cost : 6

Edge : 6(5,7) cost : 10
<br><br>
Minimum cost = 26

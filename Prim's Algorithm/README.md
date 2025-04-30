**AIM:** To find the minimum cost spanning tree of a given undirected graph using Prim's Algorithm
<br><br>
**TIME COMPLEXITY:**

O(E log V or E log V) - using binary heap

O(E + V log V) - using Fibonacci heap
<br><br>
**SPACE COMPLEXITY:** O(E + V)

E -> number of edges in graph

V -> number of vertices in graph
<br><br>
**OUTPUT:**

Enter the number of nodes: 7
<br><br>
Enter the adjacency matrix:

0 1 5 0 0 0 0

1 0 4 8 7 0 0

5 4 0 6 0 2 0

0 8 6 0 11 9 0

0 7 0 11 0 3 10

0 0 2 9 3 0 12

0 0 0 0 10 12 0
<br><br>
Edge : 1(1, 2)  cost : 1

Edge : 2(2, 3)  cost : 4

Edge : 3(3, 6)  cost : 2

Edge : 4(6, 5)  cost : 3

Edge : 5(3, 4)  cost : 6

Edge : 6(5, 7)  cost : 10
<br><br>
Minimun cost = 26

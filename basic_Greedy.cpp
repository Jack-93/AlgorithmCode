/*
Greedy
1. each time - best choice
2. without thinking "next"
3. efficient, simple
4. Locally optimal choice(LOC) [cf. DP : Global optical solution]
5. Can't solve many problems

//////////////////////////////////////////////////////////////////////////////////////////

Coin Grab
1. Goal: few coins, largest profit
2. Approach: choose Largest possible Coin

while( ~ ending ){
    1. Grab the largest remaining coin // selection procedure
    2. if(add coin -> excced target amount ?){ reject coin } // Feasibility Check (but, optional)
    3. else { add coin }
    4. if(target value == total value I got) { solved } // Solution Check
}

Solution Method
1. Largest rpofit First
2. Lightest item First
3. Largest profit per unit weight(가성비)

=> not guarantee for Max()

4. Fractional - Largest profit per uni weight + Optimal solution(Proof needed)
-> Sorting to solved
=> guarantee for Max()

//////////////////////////////////////////////////////////////////////////////////////////

Scheduling
1. Minimize total time
2. for OS system -> In multi-process,
3. Sorting to solved

int Process1 -> time 5ms
int Process2 -> time 10ms
int Process3 -> time 4ms

1. FCFS(first come, first served) -> 5+(5+10)+(5+10+4) - worst case
2. SJF(shortest job first) -> 4+(4+5)+(4+5+10) - best case

-> sort in ascending

//////////////////////////////////////////////////////////////////////////////////////////

Huffman Code('52)
1. encoding a text
2. prefix nodes
3. for() -> n, delete -> logn, insert -> logn => O(nlogn)

//////////////////////////////////////////////////////////////////////////////////////////

Single-Source Shortest Paths
1. G(Vertex, Edge)
2. Linked list
3. Cyclic, Acyclic
4. n-1에서 1개 찾기 -> n
5. Directed Graph -> Cyclic
6. 경유지 포함 (cost)

Dijkstra Algorithm for shortest paths
1. start with single-source {v1}, Y={v1} -> Vertex
2. choose nearest Vertext from {v1}
3. F={} -> edge
4.
while(until solved){
    select v form V-Y nearest from {v1} // no needed Feasibility Check
    (using only Y as "intermediates" -> 경유지)

    add v to Y;
    add the edge touching v to F;

    if(Y=V) { exit } // Solution Check;
}








*/
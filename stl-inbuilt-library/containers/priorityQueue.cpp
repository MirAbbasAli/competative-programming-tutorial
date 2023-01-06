#include<bits/stdc++.h>
using namespace std;
void priorityQueueDemo(){
    /**
     * @brief Max heap: largest element is at top (default)
     * push - log(n), pop - log(n), top - O(1)
     */
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.push(10); // {10, 8, 5, 2}

    cout<<pq.top()<<"\n"; //prints 10
    pq.pop(); // {8,5,2}

    cout<<pq.top()<<"\n"; // prints 8

    //size swap empty function same as others
    // Minimum Heap (Minimum Priority Queue)
    priority_queue<int, vector<int>, greater<int>> pqMin;
    pqMin.push(5); // {5}
    pqMin.push(2); // {2, 5}
    pqMin.push(8); // {2, 5, 8}
    pqMin.push(10); // {2, 5, 8, 10}

    cout<<pq.top()<<"\n"; // prints 2

}
int main(){
    priorityQueueDemo();
    return 0;
}
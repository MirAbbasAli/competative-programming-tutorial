#include<bits/stdc++.h>
using namespace std;

void queueDemo(){
    /**
     * @brief FIFO
     * 
     */
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back()+=5; // {1, 2, 4+5}={1,2,9} the last element is updated
    cout<<q.back()<<"\n"; // prints 9

    cout<<q.front()<<"\n"; // prints 1

    q.pop(); // {2,9}

    cout<<q.front(); // prints 2

    // size swap empty same as stack

}

int main(){
    queueDemo();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void stackDemo(){
    /**
     * @brief stack follows LIFO 
     * available functionality (push,pop,top)
     * indexing is not allowed
     */

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    // prints 5 "** st[2] is invalid **"
    cout<<st.top()<<"\n";

    st.pop(); // {4,3,2,1}
    
    cout<<st.top()<<"\n"; //4
    cout<<st.size()<<"\n"; //4
    cout<<st.empty()<<"\n"; // 0- false
    
    // swap stack
    stack<int> st1,st2;
    st1.swap(st2);

}

int main(){
    stackDemo();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void printList(list<int> ls){
    for(auto i:ls){
        cout<<i<<" ";
    }
    cout<<"\n";
}
void listDemo(){
    /**
     * @brief list<datatype> similar to vector, except allows front operation too
     * rest fuctions same as vector
     * begin, end, rbegin, rend, clear, insert, size, swap
     * insert takes o(n), its costly compare to push_front -> o(1)
     * vector single linked list is maintained
     * list doubly linkde list is maintained
     */
    list<int> ls;
    ls.push_back(2); // {2}
    printList(ls);
    ls.emplace_back(4); // {2,4}
    printList(ls);

    ls.push_front(5); // {5,2,4}
    printList(ls);
    ls.emplace_front(3); //{3,5,2,4}
    printList(ls);

}

int main(){
    listDemo();
    return 0;
}
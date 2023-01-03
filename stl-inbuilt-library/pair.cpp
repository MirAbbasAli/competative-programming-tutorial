#include<bits/stdc++.h>
using namespace std;

// Pair Explanation
void pairDemo(){
    // Pair initialization
    pair<int,int> p={1,3};

    cout<<p.first<<" "<<p.second<<"\n"; // 1 3

    // pair of pairs
    pair<int, pair<int,int>> p2={1,{3,4}}; 

    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<"\n"; // 1 3 4

    // array of pair: used as utility
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};

    cout<<arr[1].second<<"\n"; // 5
}

int main(){
    pairDemo();
    return 0;
}
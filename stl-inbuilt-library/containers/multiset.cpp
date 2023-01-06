#include<bits/stdc++.h>
using namespace std;

void multiSetDemo(){
    /**
     * Everything same as set except it can store duplicate element
     * 
     */
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    int count=ms.count(1); // 3

    ms.erase(1); // erase all the occurence of 1's
    ms.erase(ms.find(1)); // erase only 1st occurence
    
    auto itBegin=ms.find(1);
    auto itEnd=ms.find(1);
    itEnd++;
    itEnd++;
    ms.erase(itBegin,itEnd); // erase 2 occurences
    cout<<ms.count(1)<<"\n";
    // rest all functions are same

}
int main(){
    multiSetDemo();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void mapDemo(){

    /**
     * @brief map<key,value> - key:value pairs, key and value can be of any datatype
     * follows tree ds, duplicate keys not allowed
     * map stores element in sorted order of key
     * find, erase, swap, size empty are same as other containers
     */
    //----------- Declare map -------------
    map<int, int> mp;
    map<int, pair<int,int>> mpPair;
    map<pair<int,int>, int> mpPair2;

    /**
     * Storing element in map
     * 1. using [] operator
     * 2. emplace()
     * 3. insert()
     */
    mp[1]=2; // {{1,2}}
    mp.emplace(3,1); // {{1,2},{3,1}}
    mp.insert({2,4}); // {{1,2}, {2,4}, {3,1}}

    mpPair2[{2,3}]=10; // {{{2,3},10}}

    /**
     * Accessing map object it.first -> key, it.second -> value
     * 
     * @param it:mp 
     */
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    cout<<mp[1]<<"\n"; // 2
    cout<<mp[5]<<"\n"; // return 0 for key not present in map

    // access value through iterator
    auto it=mp.find(3);
    cout<<it->first<<"\n"; // prints key 3
    cout<<it->second<<"\n"; //prints value 1

    auto i=mp.find(4); // key is absent so return mp.end()
}

void multimapDemo(){
    /**
     * @brief everything same as map, only it can store multiple keys in sorted order
     * only mpp[key] cannot be used here
     * 
     */
}

void unorderedMapDemo(){
    /**
     * @brief same as set and unordered_set, not sorted, unique keys
     * 
     */
}

int main(){
    mapDemo();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
}

void vectorDemo(){

    //---------------- Declaration of vector: dynamic array ------------------------
    vector<int> v; // creates an empty container

    //---------------- insert element in vector -----------------------------------
    v.push_back(1); // [1]
    // faster than push_back
    v.emplace_back(2); // [1,2]

    // vector of pairs
    vector<pair<int,int>> vecPair;
    // use {x,y} to insert pair in vector
    vecPair.push_back({1,2});
    // with emplace_back no need to use {x,y} while inserting pair in vector
    vecPair.emplace_back(3,4);

    //------------------ Declare vector with given size and value --------------------------
    // Declare vector of size 5 with value {100, 100, 100, 100, 100}
    vector<int> v1(5,100);
    // Declar container of size 5 with value {0, 0, 0, 0, 0}
    vector<int> v2(5);
    // Deep copy of a vector into another vector
    vector<int> v3(v1);


    // --------------------- Accessing element in a vector ---------------------------------
    // Accessing vector either through [index] or vec.at(index)
    cout<<v1[0]<<" "<<v1.at(0)<<"\n";
    // v.back()Accessing last index
    cout<<v1.back()<<"\n";

    // -------------------Iterator in the container-----------------------------
    vector<int> v4={10,20,30,40};
    // Declaration of iterator. v.begin() points to the first memory location of vector i.e., address of 10
    vector<int>::iterator it=v4.begin();
    // moves the iterator by 1 index, now it will points to 20
    it++;
    cout<<*(it)<<"\n";
    // moves the iterator by 2 index, now it will points to 40
    it=it+2;
    cout<<*(it)<<"\n"; 

    // v.end() points to the memory address after the last index ie, after 40
    // so to access the last index you need to do it--;
    vector<int>::iterator itEnd=v4.end();

    /*
    * Not so Important
    * v.rend() - reverse end, its like reversing the array {40,30,20,10,rend}
    * v.rbegin() - reverse begin, pointing to the last index ie 40, if we do it++,
    *  it will point 30, then 20
    */
    vector<int>::reverse_iterator revIt=v4.rend();
    vector<int>::reverse_iterator revItBegin=v4.rbegin();

    // ------------------- Printing element in a vector ---------------
    // 1. Using iterator
    for (vector<int>::iterator i=v4.begin(); i!=v4.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<"\n";

    // 2. using auto to automatically assignn iterator
    for(auto i=v4.begin(); i!=v4.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<"\n";

    // 3. for each loop
    for(auto i : v4){
        cout<<i<<" ";
    }
    cout<<"\n";

    // 4. using v.size()
    for(int i=0; i<v4.size(); i++){
        cout<<v4[i]<<" ";
    }
    cout<<"\n";

    //------------------ Deletion of element(s) in vector ------------------------------
    vector<int> vecDel={10,20,12,23};
    /**
     * @brief 
     * v.erase(iterator) - take single argument ie, iterator posn to delete the element
     * v.erase(begin,end) - takes beginning and ending iterator posnt to delete the elements [begin,end) end is exclusive
     */
    //deletes 20 from vector: {10, 12, 23}
    vecDel.erase(vecDel.begin()+1); 
    for(auto i: vecDel){
        cout<<i<<" ";
    } 
    cout<<"\n";
    
    vector<int> vecDel2={10,20,12,23,35};
    // {10, 20, 35} [start, end)
    vecDel2.erase(vecDel2.begin()+2, vecDel2.begin()+4);
    for(auto i: vecDel2){
        cout<<i<<" ";
    } 
    cout<<"\n";

    //-------------------- Insert function -------------------
    /**
     * @brief 
     * v.insert(posn): insert element in the position given
     * v.insert(start, number_of_copies, element_to_insert)
     * v.insert(posn_to_insert, vector2_start, vector2_end) - insert another vector inside vector
     */
    vector<int> vecIns(2,100); // {100,100}
    printVector(vecIns);
    vecIns.insert(vecIns.begin(), 300); // {300, 100, 100}
    printVector(vecIns);
    vecIns.insert(vecIns.begin()+1, 2, 10); // {300,10,10,100,100}
    printVector(vecIns);
    vector<int> cpy(2,50); //{50,50};
    vecIns.insert(vecIns.begin(),cpy.begin(), cpy.end());
    printVector(vecIns); // {50,50,300,10,10,100,100}

    //----------------- Remove last element in vector ---------------
    vecIns.pop_back();

    //---------------- Swap vectors ------------------------
    // v1 -> {10,20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1={30,40} v2={10,20}

    //------------ clear the vector ----------------
    v1.clear();

    //---- check if the vector is empty, return boolean (1->False, 0->true ) ----------
    cout<<v1.empty();

}

int main(){
    vectorDemo();
    return 0;
}
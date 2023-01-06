#include<bits/stdc++.h>
using namespace std;

void setDemo(){
    /**
     * @brief Set stores data in sorted and unique order
     * tree is maintained
     * insert, erase, find - log(n)
     */
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2} (only unique occurence)
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}
    st.insert(5); // {1,2,3,4,5}
    /**
     * Functionality of insert in vector can be used also,
     * that only increases efficiency
     * 
     * begin(), end(), rbegin(), rend(), size(), empty(), swap(), lower_bound() and upper_bound()
     * are same as those of above
     * st.find(element) - returns an iterator to the element,
     * if the element not in set returns st.end()
     * 
     */
    // {1,2,3,4,5} returns an iterator which points to the 3
    auto it=st.find(3);
    // returns an st.end() as element is not present
    auto it=st.find(6);
    // {1,2,3,4}
    /**
     * st.erase(element) - element to erase
     * st.erase(iterator) - iterator to erase
     * st.erase(iteratorBegin, iteratorEnd) - [first,last) 
     */
    st.erase(5); //erases 5 takes log(n) time and maintains sorted order
    int count=st.count(1); // returns 1 if present else 0

    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1, it2); // after erase {1,4,5} [first,last) 

}
int main(){
    setDemo();
    return 0;
}
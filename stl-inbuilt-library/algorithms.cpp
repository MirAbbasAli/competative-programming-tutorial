#include<bits/stdc++.h>
using namespace std;
void printArray(int *v, int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
void printVector(vector<int> v){
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
}
void printPairArray(pair<int,int> a[], int n){
    cout<<"{";
    for(int i=0;i<n;i++){
        cout<<"{"<<a[i].first<<", "<<a[i].second<<"}";
        if(i!=n-1)cout<<", ";
    }
    cout<<"}\n";
}

/**
 * @brief Comparator for sorting pair array.
 * sort it according to second element, if second element is same,
 * then sort it according to first element but in descending order
 * ie,{{1,2},{2,1},{4,1}}-> {{4,1},{2,1},{1,2}}
 * 
 * @param p1 
 * @param p2 
 * @return true 
 * @return false 
 */
bool pairComparator(pair<int,int> p1, pair<int,int> p2){
    // sorting in ascending order according to second element
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    // if the second element are same
    if(p1.first>p2.first) return true;
    else return false;
}
void explainExtra(){
    int arr[5]={5,1,3,2,4}, n=5;
    vector<int> vec={5,1,3,2,4};
    cout<<"Print Array:: ";
    printArray(arr, 5);
    cout<<"Print Vector:: ";
    printVector(vec);

    /**
     * @brief Sorting array and vector
     * 
     */
    // sorting array
    sort(arr, arr+n);
    printArray(arr, 5);

    // sorting vector
    sort(vec.begin(), vec.end());
    printVector(vec);

    // sorting a portion array
    int arr2[5]={1,3,5,2,4};
    sort(arr2+2, arr2+5); // sorting from index [2,5) {1,3,2,4,5}
    cout<<"Sorting part of array:: ";
    printArray(arr2, 5);

    // sorting in descending order
    cout<<"Print Array:: ";
    printArray(arr, 5);
    sort(arr, arr+n, greater<int>()); //{5,4,3,2,1}
    cout<<"Print Array:: ";
    printArray(arr, 5);

    /**
     * sort it according to second element, if second element is same,
     * then sort it according to first element but in descending order
     * ie,{{1,2},{2,1},{4,1}}-> {{4,1},{2,1},{1,2}}
     */
    pair<int,int> pairArr[]={{1,2},{2,1},{4,1}};
    cout<<"Unsorted array of pair :: ";
    printPairArray(pairArr, 3);
    n=3;
    sort(pairArr, pairArr+n, pairComparator);
    cout<<"Sorted array of pair in custom order :: ";
    printPairArray(pairArr, 3);

    /**
     * @brief Finding set bit of a number e.g., 7 -> 111 (3 set bit)
     * 
     */
    int num=7;
    int cnt=__builtin_popcount(num);
    cout<<"Count set bit of "<<num<<" :: "<<cnt<<"\n";

    long long num2=165786578687;
    cnt=__builtin_popcountll(num2);
    cout<<"Count set bit of "<<num2<<" :: "<<cnt<<"\n";

    /**
     * @brief Print permutation of a string,
     * to print all the permutation of a given string always start with sorted string
     */
    string s="123"; // 123 132 213 231 312 321
    s="213"; // 213 231 312 321
    sort(s.begin(), s.end());
    cout<<"Permutation of "<<s<<" :: ";
    do{
        cout<<s<<" ";
    } while(next_permutation(s.begin(), s.end()));
    cout<<"\n";

    /**
     * @brief Finding max element in an array
     * 
     */
    int maxi=*max_element(arr,arr+5); // 5
    cout<<"max : "<<maxi<<"\n";
}

int main(){
    explainExtra();
    return 0;
}
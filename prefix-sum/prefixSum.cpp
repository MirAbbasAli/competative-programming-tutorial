#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" \n"[i==n-1];
    }
}

// Fills prefix-sum array 1D
void fillPrefixSum(int arr[], int n, int prefixSum[]){
    prefixSum[0]=arr[0];
    // Adding present element with previous element
    for(int i=0; i<n; i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }
}

int main(){
    int arr[]={10, 4, 16, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int prefixSum[n];
    
    // Function call
    cout<<"arr :: ";
    printArray(arr, n);

    fillPrefixSum(arr, n, prefixSum);

    cout<<"Prefix Sum:: ";
    printArray(prefixSum, n);
    return 0;
}
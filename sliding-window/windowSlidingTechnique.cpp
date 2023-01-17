#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Return maximum sum in subarray of size z
 * 
 * @param arr : {}, array
 * @param n : size of array
 * @param k : subarray size
 */
int maxSum(int arr[], int n, int k){
    // Compute sum of first window of size k
    int i, max_sum=0, window_sum;
    for(i=0;i<k;i++){
        max_sum+=arr[i];
    }
    /**
     * @brief Compute sum of remaining windows by removing first element of previous window
     * and addinglast element of current windows
     * 
     */
    window_sum=max_sum;
    for(i=k;i<n;i++){
        window_sum+=arr[i]-arr[i-k];
        max_sum=max(window_sum, max_sum);
    }

    return max_sum;
}

int main(){
    int arr[]={1, 4, 2 , 10, 2, 3, 1, 0, 20};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr, n, k);
    return 0;
}

// Output: 24
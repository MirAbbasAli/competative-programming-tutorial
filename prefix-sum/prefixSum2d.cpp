#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

void print2dArray(int arr[][C]){
    int i,j;
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            cout<<arr[i][j]<<" \n"[j==C-1];
        }
    }
}

// calculating prefix sum 2d array
void prefixSum2d(int arr[][C]){
    int psa[R][C], i, j;
    cout<<"array:: \n";
    print2dArray(arr);
    // Corner Case
    // 1st cell
    psa[0][0]=arr[0][0];

    // First row and first column
    for(j=1; j<C;j++){
        psa[0][j]=arr[0][j]+psa[0][j-1];
    }
    for(i=1; i<R;i++){
        psa[i][0]=arr[i][0]+psa[i-1][0];
    }

    // General Case
    for(i=1;i<R;i++){
        for(j=1;j<C;j++){
            psa[i][j]=psa[i-1][j]+psa[i][j-1]-psa[i-1][j-1]+arr[i][j];
        }
    }

    // display the value of prefix Sum array
    cout<<"Prefix Sum 2d array::\n";
    print2dArray(psa);
}

int main(){
    int arr[R][C]={{10,20,30},
                    {5,10,20},
                    {2,4,6}};
    prefixSum2d(arr);
    return 0;
}

/*
array:: 
10 20 30
5 10 20
2 4 6

Prefix Sum 2d array::
10 30 60
15 45 95
17 51 107
*/
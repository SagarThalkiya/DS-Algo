#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr_in[n] = {3,1,6,4,2} ;
    sort(arr_in,arr_in + n,greater<int>()); // sorted array in decreasing order
    // int arr[n];
    // copy(arr_in,arr_in+n,arr);

    // for(int i =0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<arr_in[0];

}
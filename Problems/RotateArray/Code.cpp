#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n,  int arr2[], int k){
    int t;
    for (int i = 0; i < n; i++)
    {
        t = (i+k)%n;
        arr2[t] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int arr[10] = {1, 2, 3, 4, 5};
    int arr2[10];
    rotateArray(arr,5, arr2, 2);

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void mergeSortedArray(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    int i = 0, j = 0, k = 0;
    int n = arr1.size(), m = arr2.size();
    while(i<n && j<m){
        if(arr1[i]< arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
    display(arr3);
}

int main(){
    
    vector<int> arr1 = {1,3,5,7,9,11};
    vector<int> arr2 = {2,4,6,8};
    vector<int> arr3;
    
    display(arr1);
    display(arr2);
    mergeSortedArray(arr1, arr2, arr3);
    // display(arr3);

    return 0;
}
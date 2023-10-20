#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int> &arr1,vector<int> &arr2){
    vector<int> arr3;
    int i = 0, j = 0, k= 0;
    while(i<arr1.size() && j<arr2.size()){
        if (arr1[i]<= arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else{
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        arr3.push_back(arr1[i++]);
    }
    while(j<arr2.size()){
        arr3.push_back(arr2[j++]);
    }

    for (int t = 0; t < arr3.size(); t++)
    {
        cout<<arr3[t]<<" ";
    }
    cout<<endl;
    
}

int main(){
    
    vector<int> arr1 = {1,3, 3,3,5 ,5,7,9, 10, 11, 13};
    vector<int> arr2 = {2,4,6,8};
    mergeSortedArray(arr1, arr2);
    
    return 0;
}
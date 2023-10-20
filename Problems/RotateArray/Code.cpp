#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rotateArray(vector<int> &arr, int k){
    cout<<"hellow"<<endl;
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i+k)%arr.size()] = arr[i];    
    }
    cout<<"hellow"<<endl;

    return 0;  
}

int main(){
    //not completed
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotateArray(arr, 2);
    // cout<<temp[0];
    return 0;
}
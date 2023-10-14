#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void displayArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void reverseArray(vector<int> &arr){
    for (int i = 0; i < arr.size()/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size()-1-i];
        arr[arr.size()-1-i] = temp;
    }
}

int main(){
    
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 2, 1,2,5,2,5,7,2};
    cout<<"Original : ";
    displayArray(arr);
    reverseArray(arr);
    cout<<"Reversed : ";
    displayArray(arr);
    
    return 0;
}
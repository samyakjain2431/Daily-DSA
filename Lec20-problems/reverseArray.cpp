#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int a, int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b] = temp;
}


void display(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void reverseArray( vector<int> &arr){
    int s = 0;
    int e = arr.size()-1;
    while(s<e){
        swap(arr, s++, e--);
    }
}

int main(){
    
    vector<int> arr = {1,2,3,4,5};
    display(arr);
    reverseArray(arr);
    display(arr);
    
    return 0;
}
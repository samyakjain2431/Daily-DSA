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

void moveZero(vector<int> &arr){
    int lastZero=-1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0){
            lastZero = i;
            break;
        }
    }
    for (int i = lastZero+1; i < arr.size(); i++)
    {
        if(arr[i]!= 0){
            int temp = arr[i];
            arr[i] = arr[lastZero];
            arr[lastZero] = temp;
            lastZero++;
        }
    }
}

int main(){
    
    vector<int> arr = {1,0, 0, 3, 5, 0, 2, 0, 1,1,0};
    cout<<"Before Operation : ";
    displayArray(arr);
    moveZero(arr);
    cout<<"After Operation : ";
    displayArray(arr);
    
    return 0;
}
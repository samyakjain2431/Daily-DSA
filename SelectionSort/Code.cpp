#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void displayArr(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void selectionSort(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[j]< arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }
    
}

int main(){
    
    vector<int> arr = {3,5,8,5,3,7,5,1,6,9,0,6,4};
    cout<<"Before Selection Sort : ";
    displayArr(arr);
    selectionSort(arr);
    cout<<"After Selection Sort : ";
    displayArr(arr);  
    return 0;
}
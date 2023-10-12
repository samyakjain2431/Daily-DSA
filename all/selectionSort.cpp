#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr){
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        int minElem  = i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[j] <arr[minElem]){
                minElem = j;
            }
        }
        swap(arr, i, minElem);
        
    }
    // display(arr);
}

int main(){
    vector<int> arr= {1,6,2,6,3,6,3,2};
    cout<<"before sorting: ";
    display(arr);
    selectionSort(arr);
    cout<<"after sorting: ";
    display(arr);
    
    
    return 0;
}
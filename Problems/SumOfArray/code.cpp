#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void displayArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {cout<<arr[i]<<" ";}
    cout<<endl;
}

vector<int> reverseArray(vector<int> &arr){
    for (int i = 0; i < arr.size()/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size() -i-1];
        arr[arr.size()-1-i] = temp;
    }
    return arr;
    
}

vector<int> addArrays(vector<int>&arr1, vector<int>&arr2){
    vector<int> arr3;
    int i = arr1.size()-1, j = arr2.size()-1;
    int carry = 0;
    int sum = 0;
    while(i>=0 && j>=0){
        sum = arr1[i--] + arr2[j--] + carry;
        carry = sum/10;
        sum %= 10;
        arr3.push_back(sum);
    }
    while(i>=0){
        sum = arr1[i--] + carry;
        carry = sum/10;
        sum = sum%10;
        arr3.push_back(sum);
    }
    while(j>=0){
        sum = arr2[j--] + carry;
        carry = sum/10;
        sum = sum%10;
        arr3.push_back(sum);
    }
    while(carry!= 0){
        sum = carry;
        carry = sum/10;
        sum = sum %10;
        arr3.push_back(sum);
    }
    return reverseArray(arr3);
}

int main(){
    
    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {1,2,3,4};
    vector<int> arr3 = addArrays(arr1,arr2);
    displayArray(arr3);
    
    
    return 0;
}
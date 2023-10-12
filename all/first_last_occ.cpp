#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
            e = mid -1;
        }
        else if(key>arr[mid]){//right me jana hai
            s = mid+1;
        }
        else if(key<arr[mid]){//left me jana hai
            e = mid -1;
        }
        mid = s +(e-s)/2;
    }
    
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
            s = mid +1;
        }
        else if(key>arr[mid]){//right me jana hai
            s = mid+1;
        }
        else if(key<arr[mid]){//left me jana hai
            e = mid -1;
        }
        mid = s +(e-s)/2;
    }
    
    return ans;
}

int main(){
    int arr[12]={1,2,3,3,3,3,3,3,3,3,3,5};
    cout<<"the first occurance of element is at index "<<firstOcc(arr, 12, 3)<<endl;
    cout<<"the last occurance of element is at index "<<lastOcc(arr, 12, 3)<<endl;
    cout<<"the element is occurred "<<lastOcc(arr, 12, 3)-firstOcc(arr,12,3)<<" times"<<endl;
}
#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid  = s+(e-s)/2;
    while(s<e){
        if(arr[0]<arr[mid]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int data){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==data){
            return mid;
        }
        if(arr[mid]<data){
            s = mid+1;
        }
        if(data < arr[mid]){
            e = mid;
        }
        mid = s+(e-s)/2;
        // -1 shows that the element not found
    }
    return -1;
}


int main(){
    int a[7] = {4,5,6,7,0,2,3};
    int pivot = findPivot(a, 7);
    int data = 6;
    int elem;
    if(a[6]<data){//this will go in big first part
        elem = binarySearch(a, 0, pivot-1, data);
    }
    else if(data<a[0]){//  this will go in 2nd small part
        elem = binarySearch(a, pivot, 6, data);
    }
    cout<<"the pivot value "<< a[pivot]<<" is present at position "<<pivot<<endl;
    cout<<"the data value "<<data<<" is present at position "<<elem<<endl;
    return 0;
}
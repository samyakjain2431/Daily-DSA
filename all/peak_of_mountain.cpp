#include<iostream>
using namespace std;


//NOT SOLVED
int findPeak(int arr[], int size){
    int s= 0;
    int e = size-1;
    int mid = (s+e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = (s+e)/2;
    }
    return arr[s];
}

int main(){
    int arr[10] = {1,2,3,5,7,8,9,11,4,0};
    cout<<"the peak element of this mountain array is "<<findPeak(arr, 10)<<endl;
}
#include<iostream>
using namespace std;

int findPivot(int arr[],  int size){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>= arr[0]){
            s= mid+1;
        }
        else{
            e = mid;
        }
        
        mid = s+(e-s)/2;
    }
    return s;
}

int main(){
    int a[20] = {6,7,8,10, 11, 12, 12, 222, 1232, 0, 1,2,4};
    cout<<sizeof(a)/4<<endl;
    // cout<<"the pivot element is "<<a[findPivot(a, sizeof(a))]<<" at position "<<findPivot(a, sizeof(a))<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]== key){
            return mid;
        }
        if(key> arr[mid]){
            start = mid+1;
        }
        if(arr[mid] > key){    
            end = mid-1;
        }
        mid = (start+end)/2;
        // -1 shows that the element not found
    }
    return -1;
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[7]= {1,2,3,4,5,6,7};
    int index = binarySearch(even, 6, 4);
    cout<<"Element found at position "<<index<<endl;
    int num = binarySearch(odd, 7, 6);
    cout<<"Element found at position "<<num<<endl;
    return 0;
}
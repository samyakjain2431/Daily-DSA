#include<iostream>
using namespace std;

int binarySqrtSearch(int n){
    int s = 0; 
    int e = n;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;

    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square<n){
            ans = mid;
            s= mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int s;
    cout<<"enter the number"<<endl;
    cin>>s;
    int ans = binarySqrtSearch(s);
    cout<<"The square root is "<<ans<<endl;
}
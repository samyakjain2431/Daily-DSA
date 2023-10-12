#include<iostream>
using namespace std;
#define N 5

int queue[N];
int rear = -1, front = -1;

void enqueue(int x){
    if(rear == N-1){
        cout<<"Overflow"<<endl;
    }
    if(front == -1 && rear == -1){
        front++;
        rear++;
        queue[rear] = x;
    }
    else{
        rear ++;
        queue[rear]= x;
    }
}

void dequeue(){
    if(rear == -1){
        cout<<"underflow"<<endl;
    }
    if(front == rear){
        front = -1;
        rear =-1;
    }
    else{
        cout<<"deleted element : "<<queue[front]<<endl;
        front++;
        // cout<<"front is now "<<front<<endl;
    }
}

void display(){
    if(rear ==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        for(int i = front; i<= rear; i++){
            cout<<queue[i]<<endl;
        }
    }
}

void peek(){
    if(rear== -1){
        cout<<"underflow"<<endl;
    }
    else{
        cout<<"front element is "<<queue[front]<<endl;
    }
}

int main(){
    enqueue(5);
    enqueue(51);
    enqueue(7);
    enqueue(6);
    display();
    cout<<endl;
    dequeue();
    dequeue();
    display();
    peek();
}
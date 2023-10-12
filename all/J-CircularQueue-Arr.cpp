#include<iostream>
using namespace std;
#define N 5

int cQueue[N];
int front = -1, rear = -1;

void enqueue(int x){
    if(front == -1 && rear == -1){
        front =1; rear = 1;
        cQueue[rear] = x;
    }
    else if((rear+1)%N == front){
        cout<<"overflow"<<endl; 
    }
    else{
        rear = (rear+1)%N ;
        cQueue[rear] = x;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){
        cout<<"underflow"<<endl;
    }
    else if(front == rear ){
        front = -1; rear = -1;

    }
    else{
        cout<<"deleted element :"<<cQueue[front]<<endl;
        front = (front+1)%N;
    }
}
void display(){
    if(front == -1 && rear == -1){
        cout<<"underflow"<<endl;
    }
    else{
        int i = front;
        while(i!= rear){
            cout<<cQueue[i]<<endl;
            i = (i+1)%N;
        }
        cout<<cQueue[rear]<<endl;
    }
}

void peek(){
    if(front == -1 && rear == -1){
        cout<<"underflow"<<endl;
    }
    else{
        cout<<"the front element is "<<cQueue[front]<<endl;
    }
}

int main(){
    enqueue(5);
    enqueue(55);
    enqueue(6);
    enqueue(25);
    display();
    dequeue();
    dequeue();
    display();
    peek();
}
#include<iostream>
#include<stdlib.h>
#define MAX 5
using namespace std;
int top=-1,stack[MAX];
void push();
void pop();
void display();
int main(){
    int ch;
    while(1){
        cout<<"\nStack Menu\n";
        cout<<"1.Push \n 2.Pop\n 3.Display\n 4.Exit\n";
        cin>>ch;
        switch(ch){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            break;
        }
    }
    return 0;
}
void push(){
    int val;
    if(top==MAX-1){
        cout<<"Stack is full";
    }
    else{
        cout<<"Enter element to push: ";
        cin>>val;
        top+=1;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1){
        cout<<"\nStack empty";
    }
    else{
        cout<<"Deleted element: "<<stack[top];
        top-=1;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        cout<<"\n Stack is: \n";
        for (int i=top;i>=0;i--){
            cout<<stack[i]<<"\n";
        }
    }
}
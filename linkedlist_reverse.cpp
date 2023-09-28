#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct LinkedList{
    Node *head;
    LinkedList(){
        head=NULL;
    }
    void disp(){
        Node *ptr=head;
        while(ptr!=NULL){
            cout<<"Data: "<<ptr->data<<"\n";
            ptr=ptr->next;
        }
    }

    void push(int val){
        Node *ptr=new Node;
        ptr->data=val;
        ptr->next=head;
        head=ptr;
    }
    void reverse(){
        Node * prev=NULL;
        Node * next=NULL;
        Node * current=head;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
};
int main(){
    LinkedList ll;
    ll.push(69);
    ll.push(10);
    ll.push(99);
    ll.push(18);

    cout<<"The Linked list is: \n";
    ll.disp();

    ll.reverse();
    cout<<"The reversed Linked list is: \n";
    ll.disp();
    
    return 0;
}
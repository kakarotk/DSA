#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node * prev;
};
Node * head;
Node * tail=NULL;
void addNode(int val){
    Node * ptr=new Node;
    ptr->data=val;
    if(head==NULL){
        head=tail=ptr;
        head->prev=NULL;
        tail->next=NULL;
    }
    else{
        tail->next=ptr;
        ptr->prev=tail;
        tail=ptr;
        tail->next=NULL;
    }
}
void sortList(){
    Node * current=NULL;
    Node * index =NULL;
    int temp;
    if(head==NULL){
        cout<<"List empty";
    }
    else{
        for(current=head;current->next!=NULL;current=current->next){
            for (index=current->next;index!=NULL;index=index->next){
                if(current->data>index->data){
                    temp=current->data;
                    current->data=index->data;
                    index->data=temp;
                }
            }
        }
    }
}
void disp(){
    Node * ptr=head;
    if(head==NULL){
        cout<<"linked list empty";
    }
    else{
        while(ptr!=NULL){
            cout<<ptr->data<<"\n";
            ptr=ptr->next;
        }
    }
}
int main(){
    addNode(13);
    addNode(89);
    addNode(69);

    cout<<"the linked list is: \n";
    disp();

    cout<<"the sorted linkedlist is: \n";
    sortList();
    disp();

    return 0;
}
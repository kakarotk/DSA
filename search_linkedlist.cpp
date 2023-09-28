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
    void SearchElement(int val){
        Node * ptr=head;
        int i=1;
        while(ptr!=NULL){
            if(ptr->data==val){
                cout<<"Element found at :"<<i;
                break;
            }
            else{
                ptr=ptr->next;
                i++;
            }
        }
        if(ptr==NULL && ptr->data!=val){
            cout<<"\nElement not found";
        }
    }
};
int main(){
    LinkedList ll;
    ll.push(99);
    ll.push(890);
    ll.push(69);
    ll.push(25);
    ll.push(101);

    ll.disp();

    ll.SearchElement(99);
    ll.SearchElement(999);
    return 0;
}
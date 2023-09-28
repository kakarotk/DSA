#include<iostream>
using namespace std;
void move(int n, char source, char temp, char destination){
    if(n==1){
        cout<<"\n Move from "<<source<<" to "<<destination;
    }
    else{
        move(n-1,source,destination,temp);
        move(1,source,temp,destination);
        move(n-1,temp,source,destination);
    }
}
int main(){
    int n;
    cout<<"Enter number of disks: ";
    cin>>n;

    move(n,'A','B','C');
    return 0;
}
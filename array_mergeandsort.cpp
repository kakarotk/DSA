#include<iostream>
using namespace std;
int arr1[20],arr2[20],arr[40],n;
void disp(int arr[]);
void create(int arr[]);
void bubblesort(int temp[]);
void merged(int [],int r[]);
int length(int temp[]);
int main(){
    int i,opt,val,choice;
    do{
        cout<<"Main Menu\n";
        cout<<"1.Create 1st Array\n";
        cout<<"2.Create 2nd Array\n";
        cout<<"3. Sort 1st Array";
        cout<<"4. Sort 2nd Array";
        cout<<"5. Merge\n";
        cout<<"6. Sort Merged Array\n";
        cout<<"Exit\n";
        
        cout<<"Enter a choice of operation: ";
        cin>>choice;
        switch(choice){
            case 1:
            create(arr1);
            cout<<"The 1st array is: ";
            disp(arr1);
            break;

            case 2:
            create(arr2);
            cout<<"The 2nd array is :";
            disp(arr2);
            break;

            case 3:
            bubblesort(arr1);
            cout<<"The sorted 1st array is: ";
            disp(arr1);
            break;

            case 4:
            bubblesort(arr2);
            cout<<"The sorted 2nd array is: ";
            disp(arr2);
            break;

            case 5:
            merged(arr1,arr2);
            cout<<"the merged array is: ";
            disp(arr);
            break;

            case 6:
            cout<<"The merged sorted array is: ";
            bubblesort(arr);
            disp(arr);
            break;

            case 7:
            break;

        }
    }
    while(choice!=7);
    return 0;
}
int length(int temp[]){
    int i=0;
    while(temp[i]!='\0'){
        i++;
    }
    return i;
}
void create(int temp[]){
    int i,n;
    cout<<"Enter no of elements: ";
    cin>>n;
    for (i=0;i<n;i++){
        cin>>temp[i];
    }
}
void disp(int temp[]){
    int i;
    n=length(temp);
    for(i=0;i<n;i++){
        cout<<"\n"<<temp[i];
    }
}
void bubblesort(int temp[]){
    int i,j,x;
    n=length(temp);
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(temp[j]>temp[j+1]){
                x=temp[j];
                temp[j]=temp[j+1];
                temp[j]=temp[j+1];
            }
        }
    }
}
void merged(int l[],int r[]){
    int i,j,k,n1,n2;
    i=j=k=0;
    n1=length(l);
    n2=length(r);
    while(i<n1&&j<n2){
        if(l[i]<r[j]){
            arr[k]=l[i];
            i++;
            j++;
        }
        else{
            arr[k]=r[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=r[j];
        j++;
        k++;
    }
}
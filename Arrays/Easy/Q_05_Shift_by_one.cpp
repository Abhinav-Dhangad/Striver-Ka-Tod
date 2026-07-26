#include<iostream>
using namespace std;

void print_Array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void shift_one(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"The original array is : ";
    print_Array(arr,n);

    shift_one(arr,n);
    cout<<"The array after shifting by one is : ";
    print_Array(arr,n);
}

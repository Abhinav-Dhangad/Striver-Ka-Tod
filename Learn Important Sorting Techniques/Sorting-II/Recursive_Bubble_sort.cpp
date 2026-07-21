#include<iostream>
using namespace std;

void Bubble_Sort(int arr[],int n){
    if(n==1) return;

    for(int j=0;j<n-2;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    Bubble_Sort(arr,n-1);
}

void Print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the noumber of elements : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    Bubble_Sort(arr,n);
    Print_array(arr,n);
}
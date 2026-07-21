#include<iostream>
using namespace std;

void Insertion_sort(int arr[],int n){
    if(n<=1) return;
    int max=arr[0];
    int maxindx=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindx=i;
        }
    }
    int temp=arr[n-1];
    arr[n-1]=arr[maxindx];
    arr[maxindx]=temp;
    Insertion_sort(arr,n-1);
}

void Print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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

    Insertion_sort(arr,n);
    Print_array(arr,n);
}
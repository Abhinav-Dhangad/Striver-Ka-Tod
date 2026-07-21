#include<iostream>
using namespace std;

void merge(int arrleft[],int leftsize, int arrright[],int rightsize,int arr[]);

void mergeSort(int arr[], int length){
    if(length<=1) return;
    int middle=length/2;
    int leftarr[middle];
    int rightarr[length-middle];
    int j=0;
    for(int i=0;i<length;i++){
        if(i<middle){
            leftarr[i]=arr[i];
        }
        else{
            rightarr[j++]=arr[i];
        }
    }
    mergeSort(leftarr, middle);
    mergeSort(rightarr, length - middle);
    merge(leftarr, middle,rightarr, length - middle,arr);
}

void merge(int arrleft[],int leftsize,int arrright[],int rightsize,int arr[]){
    int i=0;int l=0;int r=0;

    while(l<leftsize&&r<rightsize){
        if(arrleft[l]<=arrright[r]){
            arr[i++]=arrleft[l++];
        }
        else{
            arr[i++]=arrright[r++];
        }
    }
    while(l<leftsize){
        arr[i++]=arrleft[l++];
    }
    while(r<rightsize){
        arr[i++]=arrright[r++];
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

    mergeSort(arr, n);
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

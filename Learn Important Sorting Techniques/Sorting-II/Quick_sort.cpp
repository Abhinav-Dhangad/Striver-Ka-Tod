#include<iostream>
using namespace std;

void Print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Quick_sort(int arr[],int start, int end){
    if(start >= end)
        return;

    int pivot = arr[(start + end) / 2];

    int i=start;
    int j=end;
    while(i <= j){
        while(arr[i] < pivot)
            i++;

        while(arr[j] > pivot)
            j--;

        if(i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    Quick_sort(arr, start, j);
    Quick_sort(arr, i, end);
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    ;
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    Quick_sort(arr,0,n-1);
    cout<<"The sorted array is : "<<endl;
    Print_array(arr,n);
}
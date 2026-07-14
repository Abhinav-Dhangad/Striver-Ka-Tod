#include<iostream>
using namespace std;

void Selection_Sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i;j<size;j++){
            if(array[j]<array[min])
                min=j;
        }
        int temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    cout<<"Sorted array is : ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" "; 
    }   
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    Selection_Sort(arr,n);
}
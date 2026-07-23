#include<iostream>
using namespace std;

int Second_Largest(int arr[],int n){
    int max=0;
    int second=0;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]!=max){
            second=arr[i];
        }
    }
    return second;
}

int main(){
    int n;
    cout<<"Enter the number of elemenst : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int result = Second_Largest(arr,n);
    cout<<"The second largest element is : "<<result<<endl;
}
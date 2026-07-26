#include<iostream>
using namespace std;

void Find_missing(int arr[],int n){
    int sum=(n+2)*(n+1)/2;
    int act_sum=0;
    for(int i=0;i<n;i++){
        act_sum=act_sum+arr[i];
    }
    cout<<"The missing number is : "<<sum-act_sum<<endl;
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

    Find_missing(arr,n);
}
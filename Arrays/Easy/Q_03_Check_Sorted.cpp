#include<iostream>
using namespace std;

bool check_sorted(int arr[], int n){
    if(n <= 1)
        return true;

    if(arr[n-1] < arr[n-2])
        return false;

    return check_sorted(arr, n-1);
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

    if(check_sorted(arr,n)){
        cout<<"The array is sorted.";
    }
    else{
        cout<<"The array is not sorted.";
    }
}

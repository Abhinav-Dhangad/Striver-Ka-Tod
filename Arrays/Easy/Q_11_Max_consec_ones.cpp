#include<iostream>
using namespace std;

int Count_ones(int arr[],int n){
    int max=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>max){
                max=count;
            }
        }
        
        else{
            count=0;
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter element (0 or 1) :-"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"Enter the max consecutive ones is : "<<Count_ones(arr,n)<<endl;
}
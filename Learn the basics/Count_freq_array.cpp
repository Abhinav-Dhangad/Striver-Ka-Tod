#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter the value you want frequency for : ";
    cin>>q;
    cout<<"Frequency of "<<q<<" is : "<<mpp[q]<<endl;
}
#include<iostream>
#include<vector>
using namespace std;

void Linear_search(vector<int> arr,int n){
    int key;
    cout<<"Enter the element to be searched : ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"The element "<<key<<" is found at index "<<i<<endl;
            return;
        }
    }
    cout<<"The element "<<key<<" is not found in the array."<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements  : ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    Linear_search(arr,n);
}

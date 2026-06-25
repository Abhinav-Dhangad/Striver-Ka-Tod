#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_array(vector<int> &arr,int n){
    int start=0;
    int end=n-1;
    
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the elemet "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"The reversed array is : ";
    reverse_array(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
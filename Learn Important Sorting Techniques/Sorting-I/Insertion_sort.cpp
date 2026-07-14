#include<iostream>
#include<vector>
using namespace std;

void Print_vector(vector<int> arr){
    for(int x : arr)
        cout<<x<<" ";
}

void Insertion_sort(vector<int> &arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter element "<<i+1<<" : ";
        cin>>element;
        arr.push_back(element);
    }


    Insertion_sort(arr);
    cout<<"The sorted array is : "<<endl;
    Print_vector(arr);
}
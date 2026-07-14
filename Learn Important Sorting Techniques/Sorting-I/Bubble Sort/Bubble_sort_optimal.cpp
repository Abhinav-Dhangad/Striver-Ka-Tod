#include<iostream>
#include<vector>
using namespace std;

void Print_vector(vector<int> arr){
    for(int x : arr)
        cout<<x<<" ";
}

void Bubble_sort(vector<int> &arr){
    int n=arr.size();
    int count=0;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    if(!count)
        cout<<"The array is aleady soretd : "<<endl;
    else
        cout<<"The sorted array is : "<<endl;
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

    Bubble_sort(arr);
    Print_vector(arr);
}

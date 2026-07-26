#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Print_arr(const vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Union_arr(int arr1[],int n1,int arr2[],int n2,vector<int>& arr){
    int i=0;int j=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            if(arr.empty()||arr.back()!=arr1[i]){
                arr.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i]>arr2[j]){
            if(arr.empty()||arr.back()!=arr2[j]){
                arr.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if(arr.empty()||arr.back()!=arr1[i]){
                arr.push_back(arr1[i]);
            }
            i++;j++;
        }
    }

    while(i<n1){
        if(arr.empty()||arr.back()!=arr1[i]){
            arr.push_back(arr1[i]);
        }
        i++;
    }

    while(j<n2){
        if(arr.empty()||arr.back()!=arr2[j]){
            arr.push_back(arr2[j]);
        }
        j++;
    }
}

void Create_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}

int main(){
    int n1,n2;
    cout<<"Enter the size of first array : ";
    cin>>n1;
    int arr1[n1];
    Create_arr(arr1,n1);

    cout<<"Enter the size of second array : ";
    cin>>n2;
    int arr2[n2];
    Create_arr(arr2,n2);

    vector<int> arr;
    Union_arr(arr1,n1,arr2,n2,arr);
    cout<<"The union of the two arrays is : ";
    Print_arr(arr);
}

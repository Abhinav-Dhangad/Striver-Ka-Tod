#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int> &nums){
    unordered_map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]>nums.size()/2){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int majority=majorityElement(arr);
    if(majority!=-1){
        cout<<"The majority element is : "<<majority<<endl;
    }
    else{
        cout<<"No majority element found."<<endl;
    }
}
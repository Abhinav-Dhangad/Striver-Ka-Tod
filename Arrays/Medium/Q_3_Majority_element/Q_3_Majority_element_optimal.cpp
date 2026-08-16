#include<iostream>
#include<vector>
//The space complexity is lower i.e. O(1)
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = -1;

    for(int i=0;i<nums.size();i++){
        if(count==0){
            candidate=nums[i];
            count=1;
        }
        else if(candidate==nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>> n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
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

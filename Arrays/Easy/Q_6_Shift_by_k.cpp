#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    reverse(nums.begin(),nums.end());
    int real_k=k%nums.size();
    reverse(nums.begin(),nums.begin()+nums.size()-real_k);
    reverse(nums.begin()+nums.size()-real_k,nums.end());
}

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>nums[i];
    }

    int k;
    cout<<"Enter the value of k : ";
    cin>>k;

    rotate(nums,k);

    cout<<"The array after rotating by "<<k<<" positions is : ";
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}

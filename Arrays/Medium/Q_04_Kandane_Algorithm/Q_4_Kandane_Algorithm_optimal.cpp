#include<iostream>
#include<vector>

using namespace std;
//An actually good approach which can be used in numberous questions.
int maxSubArray(vector<int>& nums){
    int maxsum=nums[0];
    int sum=nums[0];

    for(int i=1;i<nums.size();i++){
        sum=max(nums[i],sum+nums[i]);
        maxsum=max(maxsum,sum);
    }
    return maxsum;
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

    int max_sum=maxSubArray(arr);
    cout<<"Maximum sum of contiguous subarray is : "<<max_sum<<endl;
}

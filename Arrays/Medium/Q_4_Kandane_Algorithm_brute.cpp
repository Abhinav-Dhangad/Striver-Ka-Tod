#include<iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxsum=0;
    for(int i=0;i<nums.size();i++){        
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum=sum+nums[j];
            if(sum>maxsum) maxsum=sum;
        }
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
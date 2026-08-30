#include<iostream>
#include<vector>
using namespace std;
//A very simple and brute approach and might not even run on leetcode due to a very high time complecity.
vector<int> find_leaders(vector<int> nums){
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int lead=true;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]>nums[i]){
                lead=false;
                break;
            }
        }
        if(lead){
            ans.push_back(nums[i]);
        }
    }
    return ans;
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

    vector<int> lead=find_leaders(arr);
    cout<<"The leaders of the array are :-"<<endl;
    for(int i=0;i<lead.size();i++){
        cout<<lead[i]<<" ";
    }
    return 0;
}

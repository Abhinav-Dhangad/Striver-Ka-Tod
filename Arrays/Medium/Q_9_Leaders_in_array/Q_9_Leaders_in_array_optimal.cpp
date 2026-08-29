#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//A very easy approach to find if you have basic knowledge of greedy and traversal.Has a O(n) time complexity.
vector<int> find_leaders(vector<int> nums){
    vector<int> ans;
    int max=INT_MIN;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]>max){
            max=nums[i];
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
    for(int i=lead.size()-1;i>=0;i--){
        cout<<lead[i]<<" ";
    }
    return 0;
}

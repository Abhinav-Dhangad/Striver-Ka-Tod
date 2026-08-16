#include<iostream>
#include<vector>
#include<algorithm>
//The code is faster as it only uses single pass.
using namespace std;

void sortnums(vector<int> &nums){
    int low=0;
    int mid=0;
    int high=nums.size()-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
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

    sortnums(arr);
    cout<<"The sorted array is :-"<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    } 
}

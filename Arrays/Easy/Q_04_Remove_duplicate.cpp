#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    for (; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            nums[++j] = nums[i];
        }
    }
    return j + 1;
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

    int newLength = removeDuplicates(nums);
    cout<<"The new length after removing duplicates is : "<<newLength<<endl;
    cout<<"The array after removing duplicates is : ";
    for(int i=0; i<newLength; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}

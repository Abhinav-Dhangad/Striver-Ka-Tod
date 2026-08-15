#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (mpp.find(complement) != mpp.end())
        {
            return {mpp[complement], i};
        }

        mpp[nums[i]] = i;
    }

    return {};
}

int main()
{
    int n, k;
    cout<<"Enter the size of the array :";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        int e;
        cin>>e;
        arr.push_back(e);
    }
    cout<<"Enter the target : ";
    cin>>k;
    vector<int> result = twoSum(arr, k);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two elements sum up to the target." << endl;
    }
}
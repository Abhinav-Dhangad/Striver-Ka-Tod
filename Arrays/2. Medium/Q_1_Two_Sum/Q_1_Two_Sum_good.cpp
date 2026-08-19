#include<iostream>
#include<vector>
using namespace std;
//no extra space complexity but slower
vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
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

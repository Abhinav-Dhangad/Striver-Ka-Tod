#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    long long maxi = LLONG_MIN;
    long long sum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
    return maxi;
}

int main()
{
    int n;
    cout << "Enter the size of the arra : ";
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];    
    }

    int max_sum = maxSubArray(arr);
    cout << "The maximum sum of the subarray is: " << max_sum << endl;
}
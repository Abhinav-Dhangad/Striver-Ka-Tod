#include <iostream>
#include <vector>

using namespace std;
//An actually good approach which can be used in numberous questions.
vector<int> maxSubArray(vector<int> &nums)
{
    int maxi = INT_MIN;
    int sum = 0;

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
    return {ansStart, ansEnd, maxi};
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

    vector<int> max_subarray = maxSubArray(arr);
    cout<<"The subarray is : ";
    for(int i=max_subarray[0];i<=max_subarray[1];i++){
        cout<<arr[i]<<" ";  
    }
    cout<<"\nThe maximum sum of contiguous subarray is : "<<max_subarray[2]<<endl;
}

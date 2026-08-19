#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<long long> maxSubArray(vector<int> &nums)
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

    return {ansStart, ansEnd, maxi};
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    vector<long long> max_subarray = maxSubArray(arr);

    cout << "The subarray is: ";

    for (int i = max_subarray[0]; i <= max_subarray[1]; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nThe maximum sum of contiguous subarray is: "
         << max_subarray[2] << endl;

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int longestSubarray(int nums[], int n, int k)
{
    int maxLen = 0;
    int left = 0, right = 0;
    int sum = nums[0];
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
            sum += nums[right];
    }
    return maxLen;
}

int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the target sum: ";
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int len = longestSubarray(arr, n, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
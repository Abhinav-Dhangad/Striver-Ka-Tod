#include <iostream>
#include <algorithm>
using namespace std;

int longestSubarray(int nums[], int n, int k)
{
    int maxLength = 0;

    for (int startIndex = 0; startIndex < n; startIndex++)
    {
        for (int endIndex = startIndex; endIndex < n; endIndex++)
        {
            int currentSum = 0;
            for (int i = startIndex; i <= endIndex; i++)
            {
                currentSum += nums[i];
            }

            if (currentSum == k)
                maxLength = max(maxLength, endIndex - startIndex + 1);
        }
    }
    return maxLength;
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
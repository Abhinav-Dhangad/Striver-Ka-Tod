#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// This is the optimized version of the longest consecutive subsequence problem and 
// an actually good approach to solve the problem. The time complexity of this approach 
// is O(nlogn) and the space complexity is O(1).
int longest_consec(vector<int> nums)
{
    if (nums.size() == 0 || nums.size() == 1)
        return nums.size();

    int count = 1;
    int max_count = 1;

    sort(nums.begin(), nums.end());

    int prev = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == prev)
            continue;

        if (nums[i] - prev == 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }

        prev = nums[i];
        max_count = max(count, max_count);
    }

    return max_count;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int seq = longest_consec(arr);

    cout << "The longest consecutive subsequence is of length " << seq << endl;

    return 0;
}
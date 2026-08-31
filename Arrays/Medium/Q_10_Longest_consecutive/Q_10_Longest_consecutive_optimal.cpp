#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longest_consec(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> st;
    int longest = 1;

    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    if (n == 0)
    {
        return 0;
    }
    for (auto x : st)
    {
        if (st.find(x - 1) == st.end())
        {
            int count = 1;
            while (st.find(x + 1) != st.end())
            {
                count++;
                x++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
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
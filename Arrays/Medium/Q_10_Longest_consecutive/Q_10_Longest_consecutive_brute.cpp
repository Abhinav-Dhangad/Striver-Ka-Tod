#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//A very simple and bad approach too slow to even get submitted on leatcode.
bool next_number(vector<int>& nums, int x) {
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] == x)
            return true;
    }
    return false;
}

int longest_consec(vector<int> nums) {
    int max_count = 0;

    for (int i = 0; i < nums.size(); i++) {

        int count = 1;
        int current = nums[i];

        while (next_number(nums, current + 1)) {
            current++;
            count++;
        }

        max_count = max(max_count, count);
    }

    return max_count;
}

int main() {
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

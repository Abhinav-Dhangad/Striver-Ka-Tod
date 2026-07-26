#include<iostream>
#include<vector>
using namespace std;


int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int x : nums)
        ans ^= x;
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements in array : ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements :-" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> nums[i];
    }

    cout << "The single number that appears only once is : " << singleNumber(nums) << endl;
}
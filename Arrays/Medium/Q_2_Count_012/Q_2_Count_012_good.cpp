#include<iostream>
#include<vector>
using namespace std;
//Higher space complexity as we are using 3 variables.
void sortColors(vector<int>& nums) {
    int zeros = 0, ones = 0, twos = 0;

    for (int x : nums) {
        if (x == 0) zeros++;
        else if (x == 1) ones++;
        else twos++;
    }

    int k = 0;

    while (zeros--) nums[k++] = 0;
    while (ones--) nums[k++] = 1;
    while (twos--) nums[k++] = 2;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    sortColors(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

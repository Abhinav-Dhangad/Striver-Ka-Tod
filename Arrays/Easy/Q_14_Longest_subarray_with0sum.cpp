#include <iostream>
#include <unordered_map>
using namespace std;

int maxLen(int A[], int n) {
  unordered_map<int, int> mpp;
  int maxi = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += A[i];

    if (sum == 0) {
      maxi = i + 1;
    }

    else {
      if (mpp.find(sum) != mpp.end()) {
        maxi = max(maxi, i - mpp[sum]);
      }
      else {
        mpp[sum] = i;
      }
    }
  }
  return maxi;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int len = maxLen(arr, n);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

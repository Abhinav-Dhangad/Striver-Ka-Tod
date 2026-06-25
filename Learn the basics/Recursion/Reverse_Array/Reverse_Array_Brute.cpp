#include <iostream>
#include <vector>
using namespace std;

void reverse_array(vector<int> &arr, int n, vector<int> &rev) {
    if(n == 0)
        return;

    rev.push_back(arr[n-1]);
    reverse_array(arr, n-1, rev);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    vector<int> rev_arr;

    for(int i = 0; i < n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin >> arr[i];
    }

    reverse_array(arr, n, rev_arr);

    cout<<"Reversed array: ";
    for(int x : rev_arr)
        cout << x << " ";
}

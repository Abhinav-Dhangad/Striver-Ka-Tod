#include <iostream>
#include <vector>
using namespace std;
//may not look like the best solution but it is. ;)
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> return_nums(nums.size());
    int pos = 0;
    int neg = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            return_nums[pos] = nums[i];
            pos += 2;
        }
        else
        {
            return_nums[neg] = nums[i];
            neg += 2;
        }
    }
    return return_nums;
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

    vector<int> rearranged_array = rearrangeArray(arr);

    cout << "The rearranged array is: ";
    for (int i = 0; i < rearranged_array.size(); i++)
    {
        cout << rearranged_array[i] << " ";
    }
    cout << endl;
}

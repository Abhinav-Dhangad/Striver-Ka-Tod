#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int count = 0;
    for (int x : nums)
    {
        if (x != 0)
            count++;
    }
    int i = 0;
    int j = 0;
    while (i < count)
    {
        if (nums[i] != 0)
        {
            i++;
            j++;
        }
        else
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> nums[i];
    }

    moveZeroes(nums);

    cout << "The array after moving zeroes to the end is : ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//A very satisfying and not so difficult to find approach if you are familiar with matrices.
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    int n;
    cout << "Enter the size of the matrix : ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << ") : ";
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);

    cout << "The rotated matrix is :-" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

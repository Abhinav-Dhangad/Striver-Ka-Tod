#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//This approach is not that satisfying and i personally couldnt see myself writing this. (its harder to find than optimal one!)
vector<vector<int>> rotateClockwise(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }
    return rotated;
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

    matrix = rotateClockwise(matrix);

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

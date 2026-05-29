#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the integer : ";
    cin >> n;

    int size = 2 * n - 1;

    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int minimum = min(min(top, bottom), min(left, right));

            cout << n - minimum;
        }

        cout << endl;
    }

    return 0;
}
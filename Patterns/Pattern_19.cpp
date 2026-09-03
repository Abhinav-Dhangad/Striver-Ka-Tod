#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;
    int width = 2*n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (j < n-i || j >= n+i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (j <= i || j >=width-i-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}

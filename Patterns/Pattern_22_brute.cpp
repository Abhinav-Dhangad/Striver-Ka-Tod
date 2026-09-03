#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;
    int size=2*n-1;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if (i < n)
            {
                if (j <= i)
                {
                    cout << (n - j);
                }
                else if (j >= size - i)
                {
                    cout << (n - (size - j - 1));
                }
                else
                {
                    cout << (n - i);
                }
            }
            else{
                if(j>=i){
                    cout<<n-(size-j-1);
                }
                else if(j<size-i){
                    cout<<n-j;
                }
                else{
                    cout<<n-(size-i-1);
                }
            }
        }
        cout << endl;
    }
}

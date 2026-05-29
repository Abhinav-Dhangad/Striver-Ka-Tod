#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;
    int alpha=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)(alpha);
        }
        alpha++;
        cout<<endl;
    }
}
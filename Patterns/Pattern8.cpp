#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;

    int width=2*n-1;
    for(int i=0;i<n;i++){
        for(int j=width;j>=0;j--){
            if(j<i||j>=width-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
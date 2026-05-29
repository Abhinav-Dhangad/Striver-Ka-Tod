#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;

    int width=(2*n)-1;

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<width;j++){
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
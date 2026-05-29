#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        for(int j=n;j>=1;j--){
            if(j>i){
                cout<<" ";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
}
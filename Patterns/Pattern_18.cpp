#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;
    int alpha=65+n;

    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<(char)(alpha-j);
        }
        cout<<endl;
    }
}

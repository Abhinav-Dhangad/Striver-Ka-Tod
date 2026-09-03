#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;
    int alpha=65;
    int width=2*n-1;

    for(int i=n;i>0;i--){
        for(int j=1;j<=width;j++){
            if(j<=n){
                if(j<i){
                    cout<<" ";
                }
                else if(j==n){
                    cout<<(char)alpha;
                }
                else{
                    cout<<(char)(alpha++);
                }
            }
            else{
                if(j<=width-(i-1)){
                    alpha--;
                    cout<<(char)(alpha);
                }
                else{
                    break;
                }
            }
        }
        alpha=65;
        cout<<endl;
    }
}

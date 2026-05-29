#include<iostream>
using namespace std;

int Find_GCD(int n1,int n2){
    while(n1!=n2){
        if(n1<n2){
            n2-=n1;
        }
        else{
            n1-=n2;
        }
    }
    return n1;
}

int main(){
    int n1,n2,gcd;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    gcd=Find_GCD(n1,n2);
    cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<gcd<<endl;
}
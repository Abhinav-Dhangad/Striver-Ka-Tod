#include<iostream>
#include<cmath>
using namespace std;

int find_gcd(int n1,int n2){
    int gcd=1;
    for(int i=1;i<=min(sqrt(n1),sqrt(n2));i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main(){
    int n1,n2;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    int gcd=find_gcd(n1,n2);
    cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<gcd<<endl;
}
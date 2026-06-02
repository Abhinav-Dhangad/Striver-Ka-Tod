#include<iostream>
#include<cmath>
using namespace std;

void checkPrime(int n){
    if(n<=1){
        cout<<n<<" is not a prime number.";
    }
    else if(n<=3){
        cout<<n<<" is a prime number.";
    }
    else{
        int temp=0;
        for(int i=4;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<n<<" is not a prime number.";
                temp=1;
                break;
            }
        }
        if(temp==0){
            cout<<n<<" is a prime number.";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    checkPrime(n);
}

#include<iostream>
#include<cmath>
using namespace std;

void printDivisors(int n){
    cout<<"The divisors of "<<n<<" are : ";
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i){
                cout<<n/i<<" ";
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    printDivisors(n);
}
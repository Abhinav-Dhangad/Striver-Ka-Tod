#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    if(n<0){
        cout<<"Only positive integers are acceptable."<<endl;
    }
    cout<<"The factorial of N is "<<factorial(n)<<endl;
    return 0;
}
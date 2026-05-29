#include<iostream>
#include<cmath>
using namespace std;

int reverse(int num){
    int rev=0;
    while(num>0){
        rev=rev*10+num%10;
        num/=10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int reversed=reverse(n);
    cout<<"The reversed number is : "<<reversed<<endl;
}
#include<iostream>
using namespace std;

int Count_digits(int num){
    int d=0;
    while(num>0){
        d++;
        num/=10;
    }
    return d;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int digits=Count_digits(n);
    cout<<"The number of digits are : "<<digits<<endl;
}

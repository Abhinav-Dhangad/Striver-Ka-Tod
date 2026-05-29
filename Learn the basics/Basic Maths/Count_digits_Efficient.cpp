#include<iostream>
#include<cmath>
using namespace std;

int Count_digits(int num){
    int d=0;
    if(num==0){
        d=1;
    }
    else{
        d=(int)log10(num)+1;
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
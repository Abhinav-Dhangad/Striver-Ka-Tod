#include<iostream>
using namespace std;

bool isPalindrome(int num){
    if(num<0){
        return false;
    }
    else{
        int rev=0;
        int temp=num;
        while(temp>0){
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==num){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(isPalindrome(n)){
        cout<<"The number is a palindrome."<<endl;
    }
    else{
        cout<<"The number is not a palindrome."<<endl;
    }
}
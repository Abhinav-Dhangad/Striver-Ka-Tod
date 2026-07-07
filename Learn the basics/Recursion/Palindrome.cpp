#include <iostream>
#include <string>
using namespace std;

int check_palindrome(string s, int start, int end) {
    if(start>=end)
        return 1;
    if(s[start]!=s[end])
        return -1;
    return check_palindrome(s,start+1,end-1);
}

int main(){
    string str;
    cout<<"Enter the string you want to check : ";
    cin>>str;

    int is_palindrome=check_palindrome(str,0,str.length()-1);
    if(is_palindrome==1){
        cout<<"The given string is a palindrome!!!";
    }
    else{
        cout<<"The given string is not a palindrome.";
    }
}
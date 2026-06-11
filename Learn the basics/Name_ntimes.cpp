#include<iostream>
#include<string>
using namespace std;

void print_name(string s, int n){
    if(n<=0){
        return;
    }
    cout<<s<<endl;
    print_name(s,n-1);
}

int main(){
    string name;
    int n;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter the number of times you want to print your name : ";
    cin>>n;
    if(n<0){
        cout<<"Number of times cannot be negative."<<endl;
        return 1;
    }
    print_name(name,n);
}
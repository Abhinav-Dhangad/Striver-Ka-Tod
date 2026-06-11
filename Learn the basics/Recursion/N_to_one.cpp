#include<iostream>
using namespace std;

void print_nums(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<n<<endl;
        print_nums(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the integer N : ";
    cin>>n;
    if(n<=0){
        cout<<"Only positive values are accepted."<<endl;
        return 1;
    }
    print_nums(n);
}
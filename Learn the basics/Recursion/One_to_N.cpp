#include<iostream>
using namespace std;

void print_nums(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    else{
        print_nums(int(n-1));
        cout<<n<<endl;
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
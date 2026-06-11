#include<iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the integer N :";
    cin>>n;
    if(n<=0){
        cout<<"Only positive values are accepted."<<endl;
        return 1;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum(n)<<endl;
    return 0;
}

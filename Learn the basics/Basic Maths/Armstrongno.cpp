#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
    int sum=0;
    int temp=n;
    int digits= int(log10(n))+1;
    while(temp>0){
        sum+=pow(temp%10,digits);
        temp/=10;
    }
    return sum==n;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<n<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<n<<" is not an Armstrong number."<<endl;
    }
}
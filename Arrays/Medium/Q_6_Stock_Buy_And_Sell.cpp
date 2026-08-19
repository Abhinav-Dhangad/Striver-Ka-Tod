#include<iostream>
using namespace std;

int maxProfit(int cost[],int n){
    int maxprofit=0;

    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            int profit=cost[j]-cost[i];
            if(profit>maxprofit) maxprofit=profit;
        }
    }
    return maxprofit;
}

int main(){
    int n;
    cout<<"Enter the size of cost array : ";
    cin>>n;
    int cost[n];

    cout<<"Enter the costs : ";
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }

    int profit=maxProfit(cost,n);
    cout<<"The maximum profit is : "<<profit<<endl;
}
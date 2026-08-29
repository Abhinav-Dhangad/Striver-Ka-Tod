#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        if (min_price > prices[i])
            min_price = prices[i];
        if (max_profit < prices[i] - min_price)
            max_profit = prices[i] - min_price;
    }
    return max_profit;
}

int main()
{
    int n;
    cout << "Enter the size of cost array : ";
    cin >> n;
    vector<int> prices(n);
    cout<<"Enter the costs : ";
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    int profit=maxProfit(prices);
    cout<<"The maximum profit is : "<<profit<<endl;
}

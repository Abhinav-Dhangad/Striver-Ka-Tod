#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
        map[arr[i]]++;
    }

    int min_freq=n, max_freq=0;
    int min_element=0, max_element=0;

    for(auto it:map){
        if(it.second>max_freq){
            max_freq=it.second;
            max_element=it.first;
        }
        if(it.second<min_freq){
            min_freq=it.second;
            min_element=it.first;
        }
    }
    cout<<"The element with the lowest frequency i.e. "<<min_freq<<" is : "<<min_element<<endl;
    cout<<"The element with the highest frequency i.e. "<<max_freq<<" is : "<<max_element<<endl;
}
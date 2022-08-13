// https://leetcode.com/problems/richest-customer-wealth/

#include<iostream>
#include<vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maximum = 0;
    int sum;

    // for(int i=0; i<accounts.size(); i++) {
    //     sum = 0;
    //     for(int j=0; j<accounts[i].size(); j++) {
    //         sum += accounts[i][j];
    //     }
    //     if (sum > maximum)
    //         maximum = sum;
    // }

    for(vector<int> i:accounts) {
        sum = 0;
        for(int j:i) 
            sum+=j;
        if(sum > maximum)
            maximum = sum;
    }

    return maximum;
}

int main() {
    int c, b, temp;
    vector<int> t;
    vector<vector<int>> accounts;
    cout<<"enter number of customers and number of banks : ";
    cin>> c >>  b;
    // cout<<"enter number of customers : ";
    // cin>>c;
    // cout<<"enter number of banks : ";
    // cin>>b;
    
    cout<<"enter the account balance for each customer in "<<b<<" banks"<<endl;
    for(int i=0; i<c; i++) {
        t.clear();
        cout<<"Customer "<<i+1<<" : ";
        for(int j=0; j<b; j++) {
            cin>>temp;
            t.push_back(temp);
        }
        accounts.push_back(t);
    }

    cout<<maximumWealth(accounts)<<endl;
}
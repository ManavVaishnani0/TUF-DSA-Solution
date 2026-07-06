#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max_profit = 0;
    for(int i=1; i<n; i++){
        for(int j=0; j<(i-1); j++){
            max_profit = max(max_profit, arr[i] - arr[j]);
        }
    }
    cout << "Maximum profit: " << max_profit << endl;
    return 0;
}


//Optimal SOlution using one pass
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = prices[0];
        for(int i=1; i<prices.size(); i++){
            min_price = min(min_price,prices[i]);
            max_profit = max(max_profit,prices[i]-min_price);
        }
        return max_profit;
    }
};*/
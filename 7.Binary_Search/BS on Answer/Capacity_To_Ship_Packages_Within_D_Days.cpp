#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
class Solution {
public:
    int fun(vector<int>& weight,int cap){
        int day = 1;
        int load = 0;
        for(int i=0; i<weight.size(); i++){
            if(load + weight[i] > cap){
                day++;
                load = weight[i];
            }
            else{
                load += weight[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(), 0);
        while(low < high){
             int mid = low + (high - low)/2;
            int req_days = fun(weights,mid);
            if(req_days <= days){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
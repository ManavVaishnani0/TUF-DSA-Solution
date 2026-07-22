#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool possible(vector<int> arr, int day, int m, int k){
        int count = 0;
        int no_B = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                no_B += (count/k);
                count = 0;
            }
            
        }
        no_B += count / k;

        return no_B >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < (long long)m*k){
            return -1;
        }
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low <= high){
            int mid = low + (high-low)/2;
            if(possible(bloomDay,mid,m,k) == true){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
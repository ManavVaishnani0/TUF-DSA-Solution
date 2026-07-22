#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int Sum_Divisor(vector<int> arr, int mid){
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += (arr[i] + mid - 1) / mid;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid =  low + (high-low)/2;
            if(Sum_Divisor(nums,mid)<=threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
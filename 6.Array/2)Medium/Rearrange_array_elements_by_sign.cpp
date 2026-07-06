#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int neg_Index = 1,pos_Index = 0;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                ans[neg_Index] = nums[i];
                neg_Index = neg_Index + 2;
            }
            else{
                ans[pos_Index] = nums[i];
                pos_Index = pos_Index + 2;
            }
        }
        return ans;
    }
};
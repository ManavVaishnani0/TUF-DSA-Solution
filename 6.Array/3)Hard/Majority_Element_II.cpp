#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(find(ans.begin(),ans.end(),nums[i])!=ans.end()){
                continue;
            }
            int count = 0;
            for(int j=0; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > n/3){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
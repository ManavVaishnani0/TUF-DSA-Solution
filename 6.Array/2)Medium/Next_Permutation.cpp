#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1;
        int m = nums.size() - 1;
        int index = -1;

        while (n > 0) {
            if (nums[n] > nums[n - 1]) {
                index = n - 1;
                break;
            }
            n--;
        }

        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        while (m > index) {
            if (nums[m] > nums[index]) {
                swap(nums[m], nums[index]);
                break;
            }
            m--;
        }

        reverse(nums.begin() + index + 1, nums.end());
    }
};
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int max_sum = arr[0];
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if(sum > max_sum){
                max_sum = sum;
            }
        }
        sum = 0;
    }
    cout << "The maximum sum of the subarray is: " << max_sum << endl;
    return 0;
}

//Kadane's Algorithm Optimal Solution
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums);
        int max_sum = nums[0];
        int current_sum = nums[0];
        for(int i=1; i<n; i++){
            current_sum = max(nums[i],current_sum + nums[i]);
            max_sum = max(max_sum,current_sum);
        }
        return max_sum;
    }
};*/
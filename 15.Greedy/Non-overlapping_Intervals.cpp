#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    static bool compare(const vector<int>& a,const vector<int>& b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(), compare);
        int count = 0;
        int lastEnd = INT_MIN;
        for(auto interval:intervals){
            int endTime = interval[1];
            int startTime = interval[0];

            if(startTime >= lastEnd){
                count++;
                lastEnd = endTime;
            }
        }
        return intervals.size()-count;
    }
};
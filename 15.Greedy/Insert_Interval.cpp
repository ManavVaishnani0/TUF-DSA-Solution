#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> Intervals;
        int i=0;
        while(i<intervals.size() && intervals[i][1] < newInterval[0]){
            Intervals.push_back(intervals[i]);
            i = i+1;
        }
        while(i<intervals.size() && intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i = i+1;
        }
        Intervals.push_back(newInterval);

        while(i<intervals.size()){
            Intervals.push_back(intervals[i]);
            i=i+1;
        }
        return Intervals;
    }
};
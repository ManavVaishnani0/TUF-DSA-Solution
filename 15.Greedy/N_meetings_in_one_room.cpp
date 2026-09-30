#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution{
    public:
    int maxMeetings(vector<int>& start, vector<int>& end){
        int count = 0;
        int lastEnd = -1;
        vector<pair<int,int>> meetings;
        for(int i=0; i<start.size(); i++){
            meetings.push_back({end[i],start[i]});
        }
        sort(meetings.begin(), meetings.end());
        for(auto meeting:meetings){
            int endTime = meeting.first;
            int startTime = meeting.second;
            if(startTime > lastEnd){
                count++;
                lastEnd = endTime;
            }
        }
        return count;
    }
};
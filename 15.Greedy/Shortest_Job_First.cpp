#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    long long solve(vector<int>& bt) {
        long long sum_waiting_time = 0;
        sort(bt.begin(),bt.end());
        for(int i=0; i<bt.size(); i++){
            long long waiting_time = 0;
            for(int j=0; j<i; j++){
                waiting_time += bt[j];
            }
            sum_waiting_time += waiting_time;
        }
        return sum_waiting_time/bt.size();
    }
};
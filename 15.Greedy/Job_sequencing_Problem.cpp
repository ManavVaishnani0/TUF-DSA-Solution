#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{  
  public:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[2] > b[2];
    }  
    vector<int> JobScheduling(vector<vector<int>>& Jobs) { 
        sort(Jobs.begin(),Jobs.end(),compare);
        int total_profit = 0;
        int count = 0;
        int max_deadline = -1;
        for(int i=0; i<Jobs.size(); i++){
            max_deadline = max(max_deadline,Jobs[i][1]);
        }
        vector<int> hash(max_deadline + 1, -1);
        for(int i=0; i<Jobs.size(); i++){
            for(int j=Jobs[i][1]; j>0; j--){
                if(hash[j] == -1){
                    count = count +1;
                    hash[j] = Jobs[i][0];
                    total_profit += Jobs[i][2];
                    break;
                }
            }
        }
        return {count,total_profit};
    } 
};
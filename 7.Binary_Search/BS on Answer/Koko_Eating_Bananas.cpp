#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int fun(vector<int>& pile,int speed){
        int total_hours = 0;
        for(int i=0; i<pile.size(); i++){
            total_hours += (pile[i] + speed - 1) / speed;
        }
        return total_hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low<high){
            int mid = low + (high - low)/2;
            int required_time = fun(piles,mid);
            
            if(required_time <= h){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;}
    
};
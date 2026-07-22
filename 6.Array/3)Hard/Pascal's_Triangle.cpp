#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int nCr(int n,int r){
        int res = 1;
        for(int i=0; i<r; i++){
            res = res * (n-i);
            res = res / (i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n = numRows;
        for(int row=1; row<=n; row++){
            vector<int> temp;
            for(int col=1; col<=row; col++){
                temp.push_back(nCr(row-1,col-1));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
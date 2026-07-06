#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left= j;
            int right = 2*n-1 -j -1;
            int bottom = 2*n-1 -i -1;
            int min1 ;
            min1 = min(min(top,left), min(right, bottom));
            cout << n - min1;
        }
        cout << endl;
    }
    return 0;
}
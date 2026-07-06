#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int k;
        for(k=1;k<=i;k++){
            cout << k;
        }
        for(int j=(i+1);j<=(2*n-i);j++){
            cout << " ";
        }
        for(int j=(2*n-i+1);j<=(2*n);j++){
            k--;
            cout << k;
        }
        cout << endl;
    }
    return 0;
}


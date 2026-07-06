#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=1;i<=(n/2);i++){
        for(int j=1;j<=(n-i);j++){
            cout <<" ";
        }
        for(int j=(n/2-i+1);j<=(n/2+i-1);j++){
            cout << "*";
        }
        for(int j=(n/2+i);j<=(n-1);j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=6;i<=n;i++){
        for(int j=1;j<=(i-1);j++){
            cout << " ";
        }
        for(int j=i;j<=(2*n-i);j++){
            cout << "*";
        }
        cout << endl;
    }
}
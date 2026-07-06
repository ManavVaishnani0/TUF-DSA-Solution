#include<iostream>
using namespace std;
void Print1toN(int n){
    if(n==0){
        return;
    }
    else{
        Print1toN(n-1);
        cout << n << endl;
    }
}
int main(){
    int n;
    cin >> n;
    Print1toN(n);
    return 0;
}
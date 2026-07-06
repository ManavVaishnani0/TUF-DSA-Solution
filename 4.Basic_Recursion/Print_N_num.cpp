#include<iostream>
using namespace std;
void printN(int n){
    if(n==0){
        return;
    }
    else{
        cout << n << endl;
        printN(n-1);
    }
}
int main(){
    int n;
    cin >> n;
    printN(n);
    return 0;
}
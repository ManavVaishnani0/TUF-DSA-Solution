#include<iostream>
using namespace std;
int SumOfNNumbers(int n){
    
    if(n==0){
        return 0;
    }
    else{
        return n + SumOfNNumbers(n-1);
    }
}
int main(){
    int sum = 0;
    int n;
    cin >> n;
    cout << SumOfNNumbers(n) << endl;
    return 0;
}
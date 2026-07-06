#include<iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    int n=m;
    int reverse_num=0;
    while(n>0){
        int last_digit = n%10;
        n = n/10;
        reverse_num = (reverse_num*10)+last_digit;
    }
    if(m == reverse_num){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}
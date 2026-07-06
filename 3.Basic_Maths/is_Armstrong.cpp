#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int original_num = n;
    int count;
    if(n == 0){
        count = 1;
    }
    else{
        count =0;
        while(n!=0){
            n = n/10;
            count++;
        }
    }
    int sum = 0;
    n = original_num;
    while(n!=0){
        int last_digit = n%10;
        int power = 1;
        for(int i=0; i<count; i++){
            power = power*last_digit;
        }
        sum = sum + power;
        n = n/10;
    }
    if(sum == original_num){
        cout << "Armstrong number" << endl;
    }
    else{
        cout << "Not an Armstrong number" << endl;
    }
}
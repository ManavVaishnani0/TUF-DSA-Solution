#include<iostream>
using namespace std;
void PrintNto1(int n){
    if(n==0){
        return ;
    }
    else{
        cout << n << endl;
        PrintNto1(n-1);
    }
}
int main(){
    int n;
    cin >> n;
    PrintNto1(n);
    return 0;
}
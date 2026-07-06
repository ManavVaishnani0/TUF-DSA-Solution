#include<iostream>
using namespace std;
void PrintName_Ntimes(string name,int n){
    if(n==0){
        return;
    }
    else{
        cout << name << endl;
        PrintName_Ntimes(name,n-1);
    }
}
int main(){
    string name;
    int n;
    cin >> name >> n;
    PrintName_Ntimes(name,n);
    return 0;
}
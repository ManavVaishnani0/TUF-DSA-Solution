#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=n; i>=1; i--){
        cout<< "*";
        if(i==1 || i==n){
            for(int j=1; j<=(n-2); j++){
                cout<<" *";
            }
        }
        else{
            for(int j=1; j<=(n-2); j++){
                cout<<"  ";
            }
        }
        cout<< " *";
        cout<< endl;
    }
    return 0;
}
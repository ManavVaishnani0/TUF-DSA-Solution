#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "enter value of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements: ";
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    int i=0;
    for(int i=0; i<n; i++){
        bool found = false;
        for(int j=0; j<n; j++){
            if(arr[j] == i){
                found = true;
                break;
            }
        }
        
        if(!found){
            cout << "missing number: " << i;
        }
    }
    
    return 0;
}
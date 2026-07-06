#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "enter length of an array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter element of an array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i=0;
    while(i<arr.size()-1){
        if(arr[i] == arr[i+1]){
            arr.erase(arr.begin() + i);
        }
        else{
            i++;
        }
    }
    cout << "final array: " ;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "enter length of an array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter an element of an array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element which u want to find: ";
    int num;
    cin >> num;

    for(int i=0; i<n; i++){
        if(arr[i] == num){
            cout << i;
        }
    }
    return -1;
}
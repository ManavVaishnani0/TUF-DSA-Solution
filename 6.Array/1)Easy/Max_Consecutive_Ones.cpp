#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "enter size of an array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements of an array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int max_count = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            max_count = max(count,max_count);
            count = 0;
        }
    }
    max_count = max(count,max_count);
    cout << max_count;
    return 0;
}
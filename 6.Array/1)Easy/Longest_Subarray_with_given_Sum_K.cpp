#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the sum K: ";
    cin >> k;
    int max_length = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if(sum == k){
                max_length = max(max_length, j-i+1);
            }
        }
    }
    cout << "The length of the longest subarray with sum " << k << " is: " << max_length << endl;
    return 0;
}
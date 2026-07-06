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

    
    int max_length = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if(sum == 0){
                max_length = max(max_length, j-i+1);
            }
        }
    }
    cout << "The length of the longest subarray with sum 0 is: " << max_length << endl;
    return 0;
}
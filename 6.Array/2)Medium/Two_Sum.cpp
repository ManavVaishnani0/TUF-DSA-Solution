#include<iostream>
#include<vector>
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
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                cout << "Pair found: " << i << " and " << j << endl;
            }
        }
    }
    return 0;
}
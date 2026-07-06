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
    int max_count = 0;
    int ans = arr[0];
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            ans = arr[i];
        }
    }
    cout << "Majority element: " << ans << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout << "enter size of an arrays: ";
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    vector<int> arr;
    arr.reserve(n+m);
    cout << "enter element of arr1: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    cout << "enter element of arr2: " << endl;
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    int left=0;
    int right=0;
    while(left < n && right < m){
        if(arr1[left]<=arr2[right]){
            arr.push_back(arr1[left]);
            left++;
        }
        else{
            arr.push_back(arr2[right]);
            right++;
        }
    }

    while(left < n){
        arr.push_back(arr1[left]);
        left++;
    }

    while(right < m){
        arr.push_back(arr2[right]);
        right++;
    }

    cout << "Sorted arr: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}
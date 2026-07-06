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
    
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << "single_element: " << arr[i];
            break;
        }
    }
    return 0;
}
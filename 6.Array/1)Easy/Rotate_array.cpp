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
    int k;
    cout << "enter value of k: ";
    cin >> k;
    while(k>0){
        int temp = arr[n-1];
        for(int i=n-2; i>=0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
        k--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//in this code worst case time complexity is O(n*k)

//that's why below code time complexity is only O(n)

/*
int main(){
    int n;
    cout << "enter length of an array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter an element of an array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "enter value of k: ";
    cin >> k;
    k = k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
*/
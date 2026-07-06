#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter Length of an array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter element of an array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int Largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>Largest) Largest = arr[i];
    }

    cout << "Largest element of an Array: " << Largest;
    return 0;
}
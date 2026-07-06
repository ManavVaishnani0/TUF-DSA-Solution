#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout << "Length of ar array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
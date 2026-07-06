#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    
    int n;
    cout << "Enter Length of arr: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        
        int minIndex = i;
        for(int j=i+1; j<n-1; j++){
        
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
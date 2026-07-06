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


    //only valid for positive values
    int Second_Largest=0;
    for(int i=0; i<n; i++){
        if(arr[i]>Second_Largest && arr[i]<Largest) Second_Largest = arr[i];
    }

    cout << "Second Largest element of an Array: " << Second_Largest;
    return 0;
}



/*valid for whole values
#include<climits>
int largest = INT_MIN;
int secondLargest = INT_MIN;

for(int i = 0; i < n; i++) {
    if(arr[i] > largest) {
        secondLargest = largest;
        largest = arr[i];
    }
    else if(arr[i] > secondLargest && arr[i] != largest) {
        secondLargest = arr[i];
    }
}*/
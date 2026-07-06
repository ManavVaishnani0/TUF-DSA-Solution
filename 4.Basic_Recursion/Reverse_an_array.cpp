#include<iostream>
using namespace std;
void ReverseArray(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    else{
        swap(arr[start],arr[end]);
        ReverseArray(arr,start+1,end-1);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = n-1;
    ReverseArray(arr,start,end);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
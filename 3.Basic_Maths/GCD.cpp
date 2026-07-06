#include<iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    int GCD;

    for(int i=1; i <= min(N1,N2); i++){
        if(N1%i == 0 && N2%i == 0){
            GCD = i;
        }
    }
    cout << GCD << endl;
    return 0;
}
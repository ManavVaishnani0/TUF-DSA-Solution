#include<iostream>
#include <string>
#include <cctype>
using namespace std;

bool Palindrome(string a,int i){
    if(i>=a.length()/2){
        return true;
    }
    if(a[i] != a[a.length()-i-1]){
        return false;
    }
    return Palindrome(a,i+1);
}

int main(){
    string a;
    cin >> a;
    int i = 0;
    if(Palindrome(a,i)){
        cout << "is_Palindrome";
    }
    else{
        cout << "Not a Palindrome";
    }
    return 0;
}

/*bool checkPalindrome(string &s, int i) {
    if (i >= s.length() / 2)
        return true;

    if (s[i] != s[s.length() - i - 1])
        return false;

    return checkPalindrome(s, i + 1);
}

int main() {
    string s;
    getline(cin, s);

    string str = "";

    for (char ch : s) {
        if (isalnum(ch)) {
            str += tolower(ch);
        }
    }

    if (checkPalindrome(str, 0))
        cout << "true";
    else
        cout << "false";

    return 0;
}*/
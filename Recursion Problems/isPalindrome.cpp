#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string s, int idx){
    if(idx > s.size()/2){
        return true;
    }
    return ((s[idx] == s[s.size() - idx -1]) && isPalindrome(s, idx+1)); 
}
int main(){
    string s;
    cin >> s;
    if(isPalindrome(s, 0)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
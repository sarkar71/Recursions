#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    static int sum = 0;
    int temp = n;
    if(temp != 0){
        temp = temp%10;
        sum = sum * 10 + temp;
        reverseNumber(n/10);
    }
    return sum;
}

int main(){
    int n; cin >> n;
    cout << reverseNumber(n);
}
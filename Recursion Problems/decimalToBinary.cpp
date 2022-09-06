#include<bits/stdc++.h>
using namespace std;
void decimalToBinary(int n){
    static int i = 0;
    int size;
    int arr[1000];
    if(n != 0){
        decimalToBinary(n/2);
        cout << n%2;
    }
}
int main(){
    int n;
    cin >> n;
    decimalToBinary(n);
}
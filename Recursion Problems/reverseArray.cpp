// Reverse String 
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
    if(start >= end){
        return ;
    }
    swap(arr[start], arr[end-1]);
    reverse(arr, start + 1, end - 1);
}
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverse(arr, 0, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
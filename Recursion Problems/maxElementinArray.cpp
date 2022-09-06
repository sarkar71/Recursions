#include<bits/stdc++.h>
using namespace std;
int maxElement(int *arr, int size){
    static int i = 0;
    static int mx = INT_MIN;
    if(size != 0){
        if(arr[i] > mx){
            mx = arr[i];
        }
        i++;
        maxElement(arr, size - 1);
    }
    return mx;
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << maxElement(arr, n);
}
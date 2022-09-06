#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y){
    if(y != 0)
        return gcd(y, x%y);
    return x;
}
int main(){
    int x, y;
    cin >> x >> y;
    int mx = max(x, y);
    int mn = min(x, y);
    int ans = gcd(mx, mn);
    cout << ans;
}
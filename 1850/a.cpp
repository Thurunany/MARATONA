#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n, a, b, c; cin >> n;
    while(n--){
        cin >> a >> b>> c;
        if(a + b >= 10 || a + c >= 10 || b + c >= 10){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
} 
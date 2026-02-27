#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
    vector<ll> ans;

    for(int i = 0; i<=n; i++) dp[i][0] = 0;
    for(int j = 0; j<=m; j++) dp[0][j] = 0;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            } else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    cout << dp[n][m] << "\n";

    int i = n, j = m;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            ans.push_back(a[i-1]);
            i--;
            j--;
        } else if(dp[i-1][j] > dp[i][j-1]){
            i--;
        } else{
            j--;
        }
    }
    for(int i = ans.size()-1; i>=0; i--) cout << ans[i] << " ";
    cout << "\n";
}
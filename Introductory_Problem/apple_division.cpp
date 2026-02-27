#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll n;
    cin>>n;
    ll ans = 0, sum = 0;
    vector<ll> a(n);
    for(int i = 0; i<n; ++i){
        cin>>a[i];
        sum += a[i];
    }
    for(int i = 0; i<(1<<n); ++i){
        ll cs = 0;
        for(int j = 0; j<n; j++){
            if(i&(1<<j)){
                cs+=a[j];
            }
        }
        if(cs*2<=sum){
            ans = max(ans, cs);
        }
    }
    cout<<sum-2*ans<<endl;
    return 0;

}
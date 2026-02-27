#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll num = 1;
    for(int i = 0; i<n; ++i){
        num = (num*2)%((int)1e9+7);
    }
    cout<<num<<endl;
    return 0;
}
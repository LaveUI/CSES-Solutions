#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    ll c=0;
    ll ans = 1;
    char l = 'A';

    for(char d : s){
        if(d==l){
            c++;
            ans = max(ans,c);
        } else{
            c=1;
            l=d;
        }
    }
    cout<<ans<<endl;
}
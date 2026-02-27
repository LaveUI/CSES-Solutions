#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;

    vector<int> cnt(26, 0);
    for(char c:s){
        cnt[c-'A']++; // counted the frequency of each character
    }
    int odd = 0;
    for(int i = 0; i<26; i++){
        if(cnt[i]%2==1){
            odd++;
        }
    }
    if(odd>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string ans(s.size(), ' ');
    int l = 0, r = s.size()-1;
    for(int i = 0; i<26; i++){
        if(cnt[i]%2==1){
            ans[s.size()/2] = (char)(i+'A');
            cnt[i]--;
        }
        while(cnt[i]>0){
            ans[l++] = ans[r--] = (char)(i+'A');
            cnt[i] -= 2;
        }
    }
    cout<<ans<<endl;
}
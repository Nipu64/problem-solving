#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    sync;
    string s,t;
    cin>>s>>t;
    ll cnt=0;
    string match="";
    for(int i=0; i<t.size(); i++)
    {
        match+=s[i];
    }
    if(match==t) cnt++;

    for(int i=t.size(); i<s.size(); i++)
    {
        match+=s[i];
        match.erase(match.begin());
        if(match==t) cnt++;
    }
    cout<<cnt<<"\n";

    return 0;

}


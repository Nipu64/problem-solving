#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void inexclusion(ll n,ll a,ll b)
{
    ll r1=n/a;
    ll r2=n/b;
    ll r3=n/(a*b);

    cout<<r1+r2-r3<<"\n";
}

int main()
{
    //sync;
    ll n,a,b;
    cin>>n>>a>>b;
    inexclusion(n,a,b);

    return 0;
}

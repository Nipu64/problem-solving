#include<bits/stdc++.h>
#define ll long long
//#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n, ans=1;
    cin>>n;
    int mod=1000000007;
    for(int i=1;i<=n;i++)
    {
        ans=ans*2;;
        ans=ans%mod;
    }
    cout<<ans<<endl;
}

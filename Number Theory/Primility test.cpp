#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cou.tie(0);
#define ll long long
using namespace std;
bool prime(ll n){
    if(n==0 || n==1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    //sync;
    ll n;
    cin>>n;

    bool x=prime(n);
    if(x)cout<<"Yes\n";
    else cout<<"No\n";


    return 0;
}


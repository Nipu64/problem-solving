#include<bits/stdc++.h>
#define  sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
if(b==0)return a;
    else return gcd(b,a%b);
   }

   ll lcm(ll a,ll b){
    return((a/gcd(a,b))*b);              //o(log(min(a,b)))
   }
int main()
{
    //sync;
     ll a,b;
     cin>>a>>b;
     cout<<lcm(a,b)<<"\n";

     return 0;
}

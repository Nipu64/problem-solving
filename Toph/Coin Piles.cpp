#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,ans;
        cin>>x>>y;

         ll m=min(x,y);
         ll n=max(x,y);
         if((x+y)%3==0 && m*2>=n)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
    return 0;

}

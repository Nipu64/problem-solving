#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    //sync;
    ll base,pow,ans=1;
    cin>>base>>pow;

    while(pow!=0)
    {

        if(pow%2==1)
        {
            ans*=base;
            pow--;
        }
        else
        {
            base*=base;
            pow/=2;
        }
    }
    cout<<ans<<"\n";
    return 0;
}

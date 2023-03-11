#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void eular(int n)
{
    int ans=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }


            ans*=i-1;
            ans/=i;

        }
    }
    if(n>1)
    {
        ans*=n-1;
        ans/=n;
    }
    cout<<ans<<"\n";
}
int main()
{
    int n;
    cin>>n;
    eular(n);
    return 0;
}

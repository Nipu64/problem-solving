#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;

    ll a[n],b[m];

    for(ll i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);


    for(ll j=0;j<m;j++)

        {
            cin>>b[j];
        }
        sort(b,b+m);
        ll cnt=0;
        ll i=0,j=0;

            while(i<n && j<m)
            {
                if(abs(a[i]-b[j])<=k)
                {
                    cnt++;
                    i++;
                    j++;
                }
                else if(a[i]<b[j])
                {
                    i++;
                }
                else
                    j++;
            }



         cout<<cnt<<endl;




}

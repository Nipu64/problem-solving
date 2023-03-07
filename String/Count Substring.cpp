#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        string s,m;
        cin>>s>>m;
        int l=s.size();
        int n=m.size();
        int cnt=0;

        for(int i=0;i<=l-n;i++)
        {
           int j;
          for( j=0;j<n;j++)
          {
              if(s[i+j]!=m[j])
                break;
          }
          if(j==n)
            cnt++;

        }
        cout<<cnt<<endl;

    }

    return 0;
}



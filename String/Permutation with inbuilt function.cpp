#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());



            cout<<s<<endl;

        while(next_permutation(s.begin(),s.end()))

        {
            cout<<s<<endl;
        }
    }
    return 0;
}

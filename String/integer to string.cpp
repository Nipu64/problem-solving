#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    //sync;
    int n,r;
    cin>>n;
    string s;
    while(n!=0){
        r=n%10;
        s.push_back(r+'0');
        n=n/10;

    }
    reverse(s.begin(),s.end());
    cout<<s<<"\n";

    return 0;
}

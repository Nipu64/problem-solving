#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    //sync;
    string s;
    cin>>s;
    int n=0;
    for(int i=0;i<s.size();i++){
        int a=s[i]-'0';
        n=(n*10)+a;
    }
    cout<<n<<"\n";
    return 0;
}

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    sync;
    string s;
    getline(cin,s);
    istringstream ss(s);
    string word;
    while(ss>>word) cout<<word<<endl;

    return 0;
}

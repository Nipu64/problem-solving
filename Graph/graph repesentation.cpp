#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
vector<ll>v[100000];
int main()
{
    //sync;
    ll n,m;//n->nodes number  m->edge number
    cin>>n>>m;
    ll a,b;//one edge connected two nodes

    while(m--){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        cout<<i;
        for(int j=0;j<v[i].size();j++) cout<<"->"<<v[i][j];
        cout<<"\n";
    }
    return 0;
}

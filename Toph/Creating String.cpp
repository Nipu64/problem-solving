#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    //sync;
    string s;
    cin>>s;
    set<string>st;
    sort(s.begin(),s.end());
    do{
        st.insert(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<st.size()<<"\n";
    for(auto u:st) cout<<u<<"\n";
    return 0;
}

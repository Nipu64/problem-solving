#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
const int N=1e7+10;
int a[N];
vector<int>v;
void seieve(int n)
{

    for(int i=2;i<=n;i++)a[i]=0;

    for(int i=3;i*i<=n;i+=2)
    {
        if(a[i]==0){
            for(int j=i*i;j<=n;j+=i+i){
                a[j]=1;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<=n;i+=2){
        v.push_back(i);
    }
}
void segmented_seieve(int l,int r)
{
    if(l==1)l++;
    int mx=r-l+1;
    int b[mx+3]={};
    for(auto p:v){
        if(p*p<=r){
            int i=(l/p)*p;
            if(i<l)i+=p;
            for(;i<=r;i+=p){
                if(i!=p)b[i-l]=1;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<mx;i++){
        if(b[i]==0)
        {
            cnt++;
            cout<<l+i<<" ";
        }
    }
    cout<<"\n";
}

int main()
{
    //sync;
    int n,l,r;
    cin>>n;
    seieve(n);
    cin>>l>>r;
    segmented_seieve(l,r);

    return 0;
}

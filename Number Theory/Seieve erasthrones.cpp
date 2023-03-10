#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e7+10;
int arr[N];
void seieve()
{
   // int n =N-5;
   int n;
    for(int i=2;i<=n;i++)arr[i]=0;
    for(int i=3;i*i<=n;i+=2){
        if(arr[i]==0){
            for(int j=i*i;j<=n;j+=i+i){
                arr[j]=1;
            }
        }
    }
    cout<<2<<" ";
    for(int i=3;i<=n;i+=2){
        if(arr[i]==0)cout<<i<<" ";
    }
    cout<<"\n";
}
int main()
{
    //sync;
    int n;
    cin>>n;
    seieve();
    return 0;
}

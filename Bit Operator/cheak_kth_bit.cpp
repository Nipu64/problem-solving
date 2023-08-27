#include<bits/stdc++.h>
using namespace std;
bool cheak_kth_bit(int x,int k)
{
    return (x>>k)&1;
}
int main()
{
    int x,k;
    cin>>x>>k;
    if(cheak_kth_bit(x,k))
      cout<<1;
      else
      cout<<0;
}
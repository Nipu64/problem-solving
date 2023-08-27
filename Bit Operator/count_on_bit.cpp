#include<bits/stdc++.h>
using namespace std;
bool cheak_kth_bits(int x,int k)
{
    return (x>>k)&1;
}
int print_on_bits(int x)
{
    int cnt=0;
    for(int i=0;i<32;i++)
    {
        if(cheak_kth_bits(x,i))
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int x;
    cin>>x;
    cout<<print_on_bits(x);
}
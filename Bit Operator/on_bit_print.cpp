#include<bits/stdc++.h>
using namespace std;
bool cheak_kth_bits(int x,int k)
{
    return (x>>k)&1;
}
void print_on_bits(int x)
{
    for(int i=0;i<32;i++)
    {
        if(cheak_kth_bits(x,i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int x;
    cin>>x;
    print_on_bits(x);
}
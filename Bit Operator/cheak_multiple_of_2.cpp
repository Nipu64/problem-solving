#include<bits/stdc++.h>
using namespace std;
bool cheak_on_bit(int x,int k)
{
    return (x>>k)&1;
}
int count_on_bit(int x)
{
    int cnt=0;
    for(int i=0;i<32;i++)
    {
        if(cheak_on_bit(x,i))
        {
            cnt++;
        }
    }
    return cnt;
}
bool cheak_multiple_of_2(int x)
{
    return count_on_bit(x)==1;
}
int main()
{
   int x;
   cin>>x;
   if(cheak_multiple_of_2(x))
   cout<<"yes\n";
   else
   cout<<"no\n";
}
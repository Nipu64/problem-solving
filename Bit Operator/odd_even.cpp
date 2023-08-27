#include<bits/stdc++.h>
using namespace std;
bool cheak_last_bit(int x)
{
    return x&1;
}
int main()
{
    int x;
    cin>>x;
    if(cheak_last_bit(x))
      cout<<"ODD\n";//last digit 1->odd
                     //last digit 0->even
      else
      cout<<"EVEN\n";
}
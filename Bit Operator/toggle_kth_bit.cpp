#include<bits/stdc++.h>
using namespace std;
int toggle_kth_bit(int x,int k)
{
    return x^(1<<k);
}
int main()
{
cout<<toggle_kth_bit(11,2);
}
#include<bits/stdc++.h>
using namespace std;
int num_of_divisor(int n)
{
    int cnt=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if((n/i)==i)
                cnt+=1;
            else
                cnt+=2;
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<num_of_divisor(n);

    return 0;
}

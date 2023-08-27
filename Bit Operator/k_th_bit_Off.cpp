#include<bits/stdc++.h>
using namespace std;
int off_kth_bit(int x,int k)
  {
    return x&(~(1<<k));//0 1 0 1
                       //1 0 1 1-> it is the just opposite of 1 k=2 ghor right shiting mean  3 ghor
                       //----------
                       //0 0 0 1->1
  }
int main()
{
    
    cout<<off_kth_bit(5,2);

}
#include<bits/stdc++.h>
using namespace std;
int on_kth_bit(int x,int k)
  {
    return x|(1<<k);//1 0 1 1
                    //0 1 0 0->1 k=2 ghor right shiting mean  3 ghor
                    //----------
                    //1 1 1 1->15
  }
int main()
{
    
    cout<<on_kth_bit(11,2);

}

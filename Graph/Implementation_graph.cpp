#include<bits/stdc++.h>
using namespace std;
map<int,list<int>>adj;

      void addEdge(int u,int v,bool direction)
      {
               adj[u].push_back(v);
               //direction==0 means undirected
               //direction==1 means directed
               if(direction==0)
               {
                adj[v].push_back(u);
               }
      }
      void print_graph()
      {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<" ";
            }
            cout<<"\n";
        }

      }


int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v,0);

    }
    print_graph();
}
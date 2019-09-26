#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];
void bfs(int s,int n)
{

    for(int i=0;i<n;i++) visited[i]=0;
    queue<int>Q;
    Q.push(s);;

    visited[s]=1;
    while(!Q.empty())
    {

        int u=Q.front();
        Q.pop();
        cout<<u;
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0){
                int v=adj[u][i];
               visited[v]=1;
               Q.push(v);
            }
        }
    }

}
int main()
{


 int var, edg;
    cout<<"ENTER NO OF VERTICES & EDGES : ";
    cin>>var>>edg;
    for(int i=0; i<edg; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"ENTER  NUMBER OF VERTICE TO SEARCH: ";
    int s;
    cin>>s;
    bfs(s,var);
    cout<<"Following is bfs tree traversal"<<endl;
    }

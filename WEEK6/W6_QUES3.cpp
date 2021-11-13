#include<bits/stdc++.h>

using namespace std;
int find(int u, vector<int> &parent){
    if(parent[u]<0) return u;
    else return find(parent[u] , parent); 
}
bool unio(int u, int v, vector<int>&parent){
    int pu=find(u,parent), pv=find(v,parent);
    if(pu!= pv){
        if(parent[pu]<parent[pv]){
            parent[pu]+=parent[pv];
            parent[pv]=pu;
            return true;
        }
        else{
            parent[pv]+=parent[pu];
            parent[pu]=pv;
            return true;
        }
    }
    return false;
}
int main(){
    int v,e,i,j;
    int x,y;
    cout<<"enter vertex and edge";
    cin>>v>>e;
    cout<<v<<e<<endl;
    vector<int>parent(v+1,-1);
    vector<int>adj[10];
    for(i=0;i<e;i++){
        int x,y;
        cout<<"enter the edge";
        cin>>x>>y;
        if(unio(x,y,parent)){
            adj[x].push_back(y);
            cout<<"NO CYCLE EXISTS";
        }
        else{
            cout<<"YES CYCLE EXISTS";
            }

    }

}
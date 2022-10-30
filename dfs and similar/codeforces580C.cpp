 #include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define MP make_pair
#define PB push_back
#define ll long long
#define FOR(x,i,n) for(int (i)=(x);(i)<(n);(i)++)
int n,m, ans=0;
vector <int> v[100005];
vector<int>w;
bool vis[100005];
void dfs(int s,int ncats) {
        if (ncats>=m && w[s])
        return;
    vis[s]=true;
    bool test=false;
    for (int i=0;i<v[s].size();i++)
    {
        if (!vis[v[s][i]])
        {
            test=true;
            if (w[s])
                dfs(v[s][i],ncats+1);
            else
                dfs(v[s][i],0);
    }
    }
        if (!test)
        ans++;
    return;
    }
int main()
{
cin>>n>>m;
w.PB(-1);
for(int i=0;i<n;i++)
{int a ;
cin>>a;
w.PB(a);}
    for(int i=0;i<n-1;i++){
    int x,y;
            cin >> x>> y;
        v[x].push_back(y);
        v[y].push_back(x);
}
    dfs (1,0);
cout<<ans<<endl ;

}
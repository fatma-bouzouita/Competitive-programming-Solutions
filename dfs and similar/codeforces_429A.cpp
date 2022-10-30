    #include <bits/stdc++.h>
    #define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
    #define MP make_pair
    #define PB push_back
    #define ll long long
    #define FOR(x,i,n) for(int (i)=(x);(i)<(n);(i)++)
    using namespace std;
vector<int> ar[100005];
int ans;

vector<int> path,init,goal;
void dfs(int node, int par, int even_times, int odd_times, int level){
    if(level%2){
        if((init[node]+odd_times)%2 != goal[node]){
            odd_times++;
            ans++;
            path.push_back(node);
        }
    } else {
        if((init[node]+even_times)%2 != goal[node]){
            even_times++;
            ans++;
            path.push_back(node);
        }
    }
    for(auto child: ar[node]){
        if(child!=par){
            dfs(child, node, even_times, odd_times, level+1);
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
cin>>n;
init.resize(n+1), goal.resize(n+1);
for(int i=1;i<n;i++){
    int a, b;
    cin>>a>>b;
    ar[a].push_back(b);
    ar[b].push_back(a);
}
for(int i=1;i<=n;i++){
    cin>>init[i];
}
for(int i=1;i<=n;i++){
    cin>>goal[i];
}

dfs(1, -1, 0, 0, 0);
cout<<ans<<endl;
for(auto x: path){
    cout<<x<<endl;
}
return 0;
}
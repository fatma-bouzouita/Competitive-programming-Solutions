#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define MP make_pair
#define PB push_back
#define ll long long
#define FOR(x,i,n) for(int (i)=(x);(i)<(n);(i)++)
int main()
{int n;ll t[100005];
cin>>n;
FOR(0,i,n)
cin>>t[i];
sort(t,t+n);
//FOR(0,i,n)
//cout<<t[i]<<endl;
string m="NO";
for(int i=0;i<n-2;i++)
{if(t[i]+t[i+1]>t[i+2])
{m="YES";
break;}
}
cout<<m<<endl;}
 #include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define MP make_pair
#define PB push_back
#define ll long long
#define FOR(x,i,n) for(int (i)=(x);(i)<(n);(i)++)
#include<bits/stdc++.h>
using namespace std;

int main()
{
FAST ;
queue<int> a1,a2;
int n,k1,k2,val;
cin>>n;
cin>>k1;
for(int i=0;i<k1;i++)
{cin>>val;
a1.push(val);}
cin>>k2;
for(int i=0;i<k2;i++)
{cin>>val;
a2.push(val);}
int ans=0,i;
for(i=0;i<300;i++)
            {int a=a1.front();
            a1.pop();
            int b=a2.front();
            a2.pop();
            if(a>b){
                ans++;
                a1.push(b);
                a1.push(a);
            }
            else{
                ans++;
                a2.push(a);
                a2.push(b);
            }
            if(a1.empty()){
                cout<<ans<<" "<<2<<endl;
                break;
            }
            else if(a2.empty()){
                cout<<ans<<" "<<1<<endl;
                break;
            }
            }
           if(i==300) cout<<-1<<endl;

            }
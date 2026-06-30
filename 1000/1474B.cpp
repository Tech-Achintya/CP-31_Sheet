#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9+7
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<int>v;
int n=1000000;
void prime(){    
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          v.pb(p);
}

int32_t main(){
    fast
    int tt=1;
    cin>>tt;
    prime();
    while(tt--){
        int d;cin>>d;
          int ans=1, j=-1;
          rep(i, v.size()){
              if(v[i]-1>=d){
                  ans*=v[i];
                  j=v[i];
                  break;
              }
          } 
          rep(i, v.size()){
              if(v[i]-j>=d){
                  ans*=v[i];
                  j=v[i];
                  break;
              }
          }
          cout<<ans<<endl;
} 
    return 0;
}
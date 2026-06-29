#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MAXN = 300000 + 1;
vector<int> preComputeXor;
void preCompute(){
    preComputeXor.resize(MAXN+1);
    preComputeXor[0] = 0;
    for(int i=1;i<=MAXN;i++){
        preComputeXor[i] = preComputeXor[i-1]^i;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    preCompute();
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        ll xorOfAll = preComputeXor[a-1];
        if(xorOfAll==b){
            cout<<a;
        }
        else if((xorOfAll^b)==a){
            cout<<a+2;
        }
        else{
            cout<<a+1;
        }
        cout<<"\n";
    }
}
// a>b
// (0 to a-1) ^ ~(0 to a-1) ^ (b) 
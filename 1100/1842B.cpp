#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin >> n >> x;
        vector<ll> arrOne(n);
        for (int i = 0; i < n; i++) {
            cin >> arrOne[i];
        }
        vector<ll> arrTwo(n);
        for (int i = 0; i < n; i++) {
            cin >> arrTwo[i];
        }
        vector<ll> arrThree(n);
        for (int i = 0; i < n; i++) {
            cin >> arrThree[i];
        }
        int a = 0;
        int b = 0;
        int c = 0;
        ll OrValue = 0;
        bool flag = false;
        bool changed = false;
        while(a<n || b<n || c<n){
            if(OrValue==x){
                flag = true;
                break;
            }
            changed = false;
            if(a<n){
                ll valOne = arrOne[a];
                if((valOne&x)==valOne){
                    OrValue|=valOne;
                    changed = true;
                    if(OrValue==x){
                        flag = true;
                        break;
                    }
                    a++;
                }

            }
            if(b<n){
                ll valTwo = arrTwo[b];
                if((valTwo&x)==valTwo){
                    changed = true;
                    OrValue|=valTwo;
                    if(OrValue==x){
                        flag = true;
                        break;
                    }
                    b++;
                }
            }
            if(c<n){
                ll valThree = arrThree[c];
                if((valThree&x)==valThree){
                    changed = true;
                    OrValue|=valThree;
                    if(OrValue==x){
                        flag = true;
                        break;
                    }
                    c++;
                }
            }
            if(!changed){
                break;
            }

        }
        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<"\n";
    }
}
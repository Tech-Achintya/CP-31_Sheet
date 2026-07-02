#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool checkIfFair(ll n){
    vector<int> digits(10,0);
    ll temp = n;
    while(temp>0){
        ll digit = temp%10;
        temp/=10;
        digits[digit] = 1;
    }
    for(int i=1;i<=10;i++){
        if(digits[i]==1){
            if(n%i){
                return false;
            }
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        if(n<2520){
            for(ll i=n;i<=2520;i++){
                if(checkIfFair(i)){
                    cout<<i<<"\n";
                    break;
                }
            }
        }else{
            if(n%2520==0){
                cout<<n<<"\n";
            }else{
                for(ll i=n;i<=n+2520;i++){
                    if(checkIfFair(i)){
                        cout<<i<<"\n";
                        break;
                    }
                }
            }
        }
    }
}
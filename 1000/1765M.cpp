#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1000000;

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
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
        cin >> n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2;
        }else{  
            ll d = 1;
            for(ll i = 2; i * i <= n; i++){
                if(n % i == 0){
                    d = n / i;
                    break;
                }
            }
            cout << d << " " << n - d;
        }
        cout<<"\n";
    }
}
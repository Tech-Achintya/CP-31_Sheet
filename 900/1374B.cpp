#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int powerOfSix(long long n) {
    if (n < 1) return -1;
    int power = 0;
    while (n % 6 == 0) {
        n /= 6;
        power++;
    }
    return (n == 1) ? power : -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll temp = n;

        int cnt2 = 0;
        int cnt3 = 0;

        while(temp % 2 == 0){
            cnt2++;
            temp /= 2;
        }

        while(temp % 3 == 0){
            cnt3++;
            temp /= 3;
        }

        if(temp != 1 || cnt2 > cnt3){
            cout << -1 << "\n";
        }
        else{
            cout << (cnt3 - cnt2) + cnt3 << "\n";
        }
    }
}
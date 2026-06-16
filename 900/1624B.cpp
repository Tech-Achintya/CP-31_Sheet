#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(b-a==c-b){
            cout<<"YES"<<"\n";
        }else{
            //consider a , b as ap
            int diff = b-a;
            int idealC = b+diff;
            if(idealC>0 && idealC%c==0){
                cout<<"YES"<<"\n";
                continue;
            }
            //consider a and c as ap
            if((a + c) % 2 == 0){
                int idealB = (a + c) / 2;
                if(idealB > 0 && idealB % b == 0){
                    cout << "YES\n";
                    continue;
                }
            }
            //consider b and c as ap
            diff = c-b;
            int idealA = b-diff;
            if(idealA>0 && idealA%a==0){
                cout<<"YES"<<"\n";
                continue;
            }
            cout<<"NO"<<"\n";
        }
    }
}

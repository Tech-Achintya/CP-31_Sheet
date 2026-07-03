#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        ll powOfTwoA = 0;
        ll powOfTwoB = 0;
        ll tempA = a;
        ll tempB = b;
        while(tempA>0 && tempA%2==0){
            tempA/=2;
            powOfTwoA++;
        }
        while(tempB>0 && tempB%2==0){
            tempB/=2;
            powOfTwoB++;
        }
        if(tempA!=tempB){
            cout<<-1<<"\n";
            continue;
        }
        ll diff = abs(powOfTwoA-powOfTwoB);
        int oper = 0;
        while(diff>0){
            if(diff>=3){
                diff-=3;
            }else if(diff>=2){
                diff-=2;
            }else{
                diff-=1;
            }
            oper++;
        }
        cout<<oper<<"\n";
        
    }
}
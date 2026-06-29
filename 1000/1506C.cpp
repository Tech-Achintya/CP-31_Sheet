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
        string a,b;
        cin>>a>>b;
        //iterate over any of the string for every substring check if it is present in b
        int n = a.size();
        int m = b.size();
        int oper = n+m;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string substr = a.substr(i, j - i + 1);
                int idx = b.find(substr);
                if(idx!=string::npos){
                    oper = min(oper, n + m - 2 * (int)substr.size());
                }
            }
        }
        cout<<oper<<"\n";
    }
}
// c o d e f o r c e s
// 0 1 2 3 4 5 6 7 8 9 
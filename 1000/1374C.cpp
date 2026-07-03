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
        int n;
        cin >> n;
        string s; cin >> s;
        stack<char> st;
        int validPairsCnt = 0;
        for(char c : s){
            if(c == '('){
                st.push('(');
            } else {
                if(!st.empty() && st.top() == '('){
                    validPairsCnt++;
                    st.pop();
                }
            }
        }
        int invalidPairs = n-validPairsCnt*2;
        cout<<invalidPairs/2<<"\n";
    }
}
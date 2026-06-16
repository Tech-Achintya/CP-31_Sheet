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
        string s;
        cin >> s;

        int n = s.size();

        int zz = -1; 
        int tf = -1; 
        int fz = -1; 
        int sf = -1; 

        int minSteps = 1e9;

        for (int i = n - 1; i >= 0; i--) {
            char c = s[i];

            if (zz != -1 && c == '0') {
                minSteps = min(minSteps, n - i - 2);
            }

            if (tf != -1 && c == '2') {
                minSteps = min(minSteps, n - i - 2);
            }

            if (fz != -1 && c == '5') {
                minSteps = min(minSteps, n - i - 2);
            }

            if (sf != -1 && c == '7') {
                minSteps = min(minSteps, n - i - 2);
            }

            if (c == '0') {
                if (zz == -1)
                    zz = i;   

                if (fz == -1)
                    fz = i;   
            }

            if (c == '5') {
                if (tf == -1)
                    tf = i;   

                if (sf == -1)
                    sf = i;   
            }
        }

        cout << minSteps << '\n';
    }

    return 0;
}
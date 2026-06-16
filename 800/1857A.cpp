#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
 
            int count_odds = 0;
            for (int i = 0; i < n; i++) {
                int val;
                cin >> val;
                if (val % 2 != 0) {
                    count_odds++;
                }
            }
 
            // The ONLY condition that matters:
            if (count_odds % 2 == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
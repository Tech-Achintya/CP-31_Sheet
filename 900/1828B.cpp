    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            vector<int> arr(n);
            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }
            
            int g = 0;
            for (int i = 0; i < n; i++) {
                g = gcd(g, abs(arr[i] - (i+1)));
            }
           
            cout<<g<<"\n";
        
        }
    }
    // 1 11 6 4 8 3 7 5 9 10 2
    // 1  2 3 4 5 6 7 8 9 10 11 
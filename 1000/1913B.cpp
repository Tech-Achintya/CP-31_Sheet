// 111100->110011
// 000011
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int n = s.size();
        int cnt0 = 0;
        int cnt1 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        if(cnt0==cnt1){
            cout<<0<<"\n";
            continue;
        }
        if(cnt0==0 || cnt1==0){
            cout<<n<<"\n";
            continue;
        }
        string t = "";
        int i=0;
        while(i<n){
            if(s[i]=='1'){
                if(cnt0==0){
                    break;
                }
                cnt0--;
            }else{
                if(cnt1==0){
                    break;
                }
                cnt1--;
            }
            i++;
        }
        cout<<n-i<<"\n";
    }  
}

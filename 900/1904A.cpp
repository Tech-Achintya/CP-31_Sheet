#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a,b,xK,yK,xQ,yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;
        //approch : just find out from how many places king can be attacked 
        //and same find out for queen and then just take intersection of the both
        set<pair<int,int>> st1;
        set<pair<int,int>> st2;
        vector<pair<int,int>> direc = {
            
            {a,b},
            {a,-b},
            {-a,b},
            {-a,-b},
            {b,a},
            {b,-a},
            {-b,a},
            {-b,-a}

        };

        //enter the knight pos which can attack king
        for(int i = 0; i < 8; i++) {

            int newX = xK + direc[i].first;
            int newY = yK + direc[i].second;

            st1.insert({newX,newY});
            newX = xQ + direc[i].first;
            newY = yQ + direc[i].second;
            st2.insert({newX,newY});
        }

        int cnt = 0;

        for(auto &it: st1) {
            if(st2.find(it)!=st2.end()){
                cnt++;
            }
        }

        cout << cnt << "\n";
    }
}
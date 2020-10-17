#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int op[N][8];
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, m, k; cin >> n >> m >> k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        for(int j = 0; j < k; ++j){
            int tmp = v[i] + j;
            int t = tmp%k;
            //if(t < 0) t += k;
            op[i][t] = j;
        }
        for(int j = 0; j < k; ++j){
            int tmp = v[i] - j;
             int t = tmp%k;
            //if(t < 0) t += k;
            op[i][t] = min(op[i][t], j);
        }

    }
    int ans = 0;
    for(int i = 0; i < k; ++i){
        int l = 0, r = 0, curop = 0;

        while(r < n){
            if(op[r][i] + curop <= m){
                curop += op[r][i];
                ans = max(ans, r - l + 1);
                r++;
            }else{
                curop -= op[l][i];
                l++;
                if(l > r) r == l;
            }
        }
    }
    cout << ans;
}

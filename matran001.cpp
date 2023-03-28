#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105],f[105][105];

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                cin >> a[i][j];
        memset(f, 0, sizeof f);
        for(int i = 1; i <= m; i++) f[1][i] = a[1][i]; // trường hợp đơn giản
        for(int i = 2; i <= n; i++) // bắt đầu dp
            for(int j = 1; j <= m; j++)
                f[i][j] = max(f[i-1][j-1], max(f[i-1][j], f[i-1][j+1])) + a[i][j];
        int res = 0; // tìm đường đi dài nhất
        for(int i = 1; i <= m; i++)
            res = max(res, f[n][i]);
        cout << res << endl;
    }
    return 0;
}
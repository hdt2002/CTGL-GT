#include <bits/stdc++.h>
using namespace std;

const int N = 1005;

int T, n, m, f[N][N];
char s1[N], s2[N];

int main()
{
    cin >> T;
    while (T--)
    {
        cin >> s1 + 1 >> s2 + 1;
        n = strlen(s1 + 1), m = strlen(s2 + 1);

        memset(f, 0, sizeof(f));

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                if (s1[i] == s2[j])
                {
                    f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
                }
            }
        }

        cout << f[n][m] << endl;
    }

    return 0;
}

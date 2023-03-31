#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
        string s;
        int k;
        cin >>k >>s;
        int n = s.size();// kích thước của chuỗi
        for(int i=0;i<=n-1;i++){
            char l = s[n-1]; // l la ky tu cuoi cung trong chuoi
            int vt=n-1;
            for(int j = n-1; j > i && k > 0; --j) // 
			{
                if(l < s[j]) l = s[j], vt=j; // neu l < s[j] cap nhat lai l (phan tu lon nhat ) va vt(vi tri phan tu lon nhat)
            }
            if(l > s[i] && k > 0) swap(s[i],s[vt]),k--; // neu l > s[i] v� k > 0 doi cho s[i] v� s[vt] giam k;
        }
        cout <<s <<'\n';

	}
	return 0;
}

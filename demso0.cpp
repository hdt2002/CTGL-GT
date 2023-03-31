#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int dem=0;
        for (int i=1 ;i <=n ;i++){
            int x;
            cin >> x;
            if(x==0) dem++;
        }
        cout << dem << endl;

    }
    return 0;
}

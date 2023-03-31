#include<bits/stdc++.h>
#define endln '\n'

using namespace std;

vector<int> ke[10001]; 

int main(){
    int t; 
	cin >> t;
    while(t--){
        int v, e; 
		cin >> v >> e;
        while(e--){
            int x, y;
			cin >> x >> y;
            ke[x].push_back(y);// them dinh y vào cuoi danh sach ke cua dinh x
            ke[y].push_back(x);// them dinh x vào cuoi danh sach ke cua dinh y
        }
        for(int i=1; i<=v; i++){
            cout << "D"<<i << ": ";
            sort(ke[i].begin(), ke[i].end());// sap xep cac phan tu trong vector ke[i] tu phan tu dau => cuoi theo tt tang dan
            for(int x : ke[i]){ // for each x dc gan vs tg phan tu trong ke[i]
                cout << x << " "; // in ra tung phan tu do
            }
            cout << endl;
            ke[i].clear();// xoa phan tu trong vector ke[i]
        }
    }
    return 0;
}

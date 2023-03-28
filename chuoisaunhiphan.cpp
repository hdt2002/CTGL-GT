#include <iostream>
using namespace std;
 
int a[100];
 
void show(int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
  
  
void Backtracking(int k, int n){
    for(int i = 0; i<= 1; i++)
    {
        a[k] = i;
        if(k == n-1){
            show(n);
        }
        else{
            Backtracking(k+1,n);
        }
    }
}
  
int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n;
		cin>>n;
		Backtracking(0, n);
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k; cin >> n >> k;
	int cnt = 0;
	vector<int> a(n);
	for(int i = 0; i < n; i ++){
		cin >> a[i];
		if(a[i] >= k) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
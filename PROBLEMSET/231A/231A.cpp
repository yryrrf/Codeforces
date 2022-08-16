#include <iostream>
using namespace std;
int solve(){
	int f,s,t;
	cin>>f>>s>>t;
	return (f+s+t)>=2;	
}

int main(){
	int t;
	cin>>t;
	int ans = 0;
	while(t--) {
		ans+=solve();
	}
	cout<<ans;
}

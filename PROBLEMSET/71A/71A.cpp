#include <iostream>
#include <string>
using namespace std;

void solve(){
	string ans = "";
	string tmp;
	cin>>tmp;
	if(tmp.size()>10) {
		ans+=tmp[0];
		ans+=to_string(tmp.size()-2);
		ans+=tmp[tmp.size()-1];
	}else {
		ans = tmp;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

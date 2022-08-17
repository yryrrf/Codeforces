#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,m,a,b;
	int ans;
	cin>>n>>m>>a>>b;
	if(m*a<=b){
		ans = a*n;
	}else{
		ans = n/m*b + min((n%m)*a,b);
	}
	cout<<ans;
}


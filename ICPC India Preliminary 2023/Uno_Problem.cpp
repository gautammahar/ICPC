#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,p=0,dir;
	string s;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cin>>s;
		p=0;
		dir=1;
		for(int i=0;i<k;i++){
			if(s[i]=='U') p=(p+1*dir+n)%n;
			else if(s[i]=='S') p=(p+2*dir+n)%n;
			else {
				dir=-dir;
				p=(p+1*dir+n)%n;
			}
		}
		cout<<p+1<<endl;
	}
	return 0;
}

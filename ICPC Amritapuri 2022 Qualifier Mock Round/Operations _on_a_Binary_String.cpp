#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
 	
	cin>>t;
	string s;
	while(t--){
		cin>>n>>x;
		cin>>s;
		vector<int> v;
		long l=0;
		int count=0;
		int i=0;
		while(i<n){
			
			if(s[i]=='1') {count++;i++;}
			else{
				l=1;i++;
				while(i<n && s[i]=='0'){
					i++;l++;
				}
				v.push_back(l);
			}
			
		}
		sort(v.begin(),v.end());
		int ans=count;
		for(int i=v.size()-1;x>0 && i>=0;i--){
			if(2*v[i]+1>x){
				ans+=(x-1)/2;
				break;
			}
			else{
				ans+=v[i];
				x-=(2*v[i]+1);
			}
		}
// 		for(auto j:v){
// 			cout<<j<<" "<<endl;
// 		}
 		cout<<ans<<endl;
		
	}
}

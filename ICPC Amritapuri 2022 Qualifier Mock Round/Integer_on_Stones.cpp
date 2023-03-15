#include<iostream>
#define K 1000000007
using namespace std;
int main(){
	long long t,a,n;
 	
	cin>>t;
	
	while(t--){
		cin>>a>>n;
		if(a<0) cout<<1<<endl;
		else{
			n=n>>1;

			long long ans=1;
			while(n){
				if(n&1==1)
					ans=(ans*a)%K;
				a=(a*a)%K;
				n=n>>1;
			}
			cout<<ans<<endl;
		}
		
	}
}

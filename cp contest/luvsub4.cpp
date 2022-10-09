// #include<bits/stdc++.h>
// using namespace std;
// const long long N=1e7+7;
// long long a[N];
// int main(){
// 	long long n,m;
// 	cin>>n>>m;
// 	// long long a[n];
// 	// for(int i=1;i<=n;i++){
// 	// 	a[i]=0;
// 	// }
// 	while(m--){
// 		long long j,k,l;
// 		cin>>j>>k>>l;
// 		for(int i=j;i<=k;i++){
// 			a[i]=a[i]+l;
// 		}
		
// 	}
// 	long long lar=LLONG_MIN;
// 	for(int i=1;i<=n;i++){
// 		if(a[i]>=lar){
// 			lar=a[i];
// 		}
// 	}
// 	cout<<lar<<endl;

// }
#include<bits/stdc++.h>
using namespace std;
const long long N=1e7+7;
long long a[N];
int main(){
	long long n,m;
	cin>>n>>m;
	// long long a[n];
	// for(int i=1;i<=n;i++){
	// 	a[i]=0;
	// }
	while(m--){
		long long j,k,l;
		cin>>j>>k>>l;
		a[j]+=l;
		a[k+1]-=l;
		
	}
	for(int i=1;i<=n;i++){
		a[i]=a[i]+a[i-1];
	}
	long long lar=LLONG_MIN;
	for(int i=1;i<=n;i++){
		if(a[i]>=lar){
			lar=a[i];
		}
	}
	cout<<lar<<endl;

}
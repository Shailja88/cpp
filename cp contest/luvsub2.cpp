#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int Q=1e5+7;
long long a[N];
long long b[N];
int main(){
        
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i]+b[i-1];
        }


        int t;
        cin>>t;
        while(t--){
            long long l,m;
            cin>>l>>m;
            cout<<b[m]-b[l-1]<<endl;
            
        }

    return 0;
}
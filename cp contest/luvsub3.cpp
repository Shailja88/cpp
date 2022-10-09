/*Given 2d array a of N*N integers. Given Q queries and in each query given a,b,c and d print sum of square represented 
by (a,b) as top left point and (c,d) as top bottom
right point 
Constraints
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/
// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e3+7;
// int ar[N][N];
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cin>>ar[i][j];
//         }
//     }
//  int t;
//  cin>>t;
//  while(t--){
//     int a,b,c,d;
 
//     cin>>a>>b>>c>>d;
//     long long sum=0;
//     for(int i=a;i<=c;i++){
//         for(int j=b;j<=d;j++){
//    sum=sum+ar[i][j];
//         }
//     }
//     cout<<sum<<endl;
//  }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0]=backward[n+1]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            forward[i]=__gcd(a[i],forward[i-1]);
        }
         for(int i=n;i>0;i--){
            backward[i]=__gcd(a[i],backward[i+1]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(forward[l-1],backward[r+1])<<endl;
        }
    }
    return 0;
}
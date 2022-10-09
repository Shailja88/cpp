/*Given array a of N integers.Given Q queries
and in each query given a number X,print count of 
that number in array.
Constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7;
     long long a[N],b[N];
int main(){
 
  int n;
  cin>>n;
 
   for(int i=0;i<n;i++){
    cin>>a[i];
    b[a[i]]++;
   }
 
   int t;
   cin>>t;
   while(t--){
    long long x;
    cin>>x;
    cout<<b[x]<<endl;
   }
    return 0;
}
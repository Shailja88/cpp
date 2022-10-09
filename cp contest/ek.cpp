






// //     #ifndef ONLINE_JUDGE
// // //for getting input from input.txt
// // freopen("inputf.in", "r", stdin);
// // //for writing output to output.txt
// // freopen("outputf.out", "w", stdout);
// // #endif

// // #include <bits/stdc++.h>
// // using namespace std;
// // const int M = 1e9 + 7;
// // #define ll long long
// // void testcase(ll t) {cout << "Case #" << t << ": ";}

// // void solve()
// // {
   

// // }


// // int main() {
// //     int t;
// //     cin >> t;
// //     for (int i = 1; i <= t; ++i)
// //     {
// //         testcase(i);
// //        solve();

// //     }
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){


//     int t;
//     cin>>t;
//     int k=t;
//     while(t--){
//         int r,c;
//         cin>>r>>c;
//         char a[r][c];
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 cin>>a[i][j];
//             }
//         }
//     if(r==1|| c==1){
//         int failure =0;
//         for(int i=0;i<r;i++){
            

//             for(int j=0;j<c;j++){

//                 if(a[i][j]=='^')
//                 {
//                     cout<<"Case #"<<k-t<<": Impossible"<<endl;
//                     failure=1;
//                     break;
//                 }
                
//             }

//             if(failure==1)
//                     break;

//         }

//                    if(failure==0){
//             cout<<"Case #"<<k-t<<": Possible"<<endl;
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 cout<<a[i][j];
//             }
//             cout<<endl;
//         }

//  }

//     }

//     else{


//     int count = 0;

//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){

//                 if(a[i][j]=='^')
//                 {
//                     count++;
//                 }
                
//             }
//         }

//         if (count==0)
//         {
//             cout<<"Case #"<<k-t<<": Possible"<<endl;
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 cout<<a[i][j];
//             }
//             cout<<endl;
//         }

//         }
//         else{
//         cout<<"Case #"<<k-t<<": Possible"<<endl;
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 cout<<"^";
//             }
//             cout<<endl;
//         }

//     }

//   }

// }

//   return 0;
// }
// #include<iostream>
// #include<ctime>
// using namespace std;
// int main(){
// 	time_t ct=time(0);
// 	string currenttime=ctime(&ct);
// 	cout<<currenttime;
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
ll r=t;
while(t--){
	ll n,k;

	cin>>n>>k;
	ll a[n];
	ll b[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	
	if(k==0){
		ll c3=0;
		for(ll i=0;i<n;i++){
			if(a[i]==b[i]){
            c3++;
			}
		}
		if(c3==n){
			cout<<"Case #"<<r-t<<": YES"<<endl;
		}
		else {
			cout<<"Case #"<<r-t<<": NO"<<endl;
		}
	}
	else if(n==2){
		if(a[0]==b[0]){
             if(k%2==0){
             	cout<<"Case #"<<r-t<<": YES"<<endl;
             }
             else {
             	cout<<"Case #"<<r-t<<": NO"<<endl;
             }
		}
		else{

             if(k%2!=0){
             	cout<<"Case #"<<r-t<<": YES"<<endl;
             }
             else {
             	cout<<"Case #"<<r-t<<": NO"<<endl;
             }
		}
	}
	else{
		//for a[]
		ll flag=0;ll c1=0;ll c2=0;
          for(ll i=0;i<n;i++){
		     if(a[c1]==b[i])
			{
			c1++;
			flag++;	
			}
		  }
		    for(ll i=0; i<n;i++){
		     if(b[c2]==a[i])
			{
			c2++;
			flag++;	
			}
		  }
		  if(flag==n){
              cout<<"Case #"<<r-t<<": YES"<<endl;
		  }
		  else{
			cout<<"Case #"<<r-t<<": NO"<<endl;
		  }



	
	}
}
	return 0;
}
// //'normal' maps 'sorted' order m print hoti hai .....implement red black tree s hoti  hai
// //'unordered' maps 'unsorted' m print hoti hai ..........gyan
// //maps m it++ ---> very good &&&&&&&&&&&& it+1----->very bad!!(data continuous way me nhi store hote hai )
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// map<int,int>m;
// m[1]=12;
// m[43]=934;
// m[10]=0;
// m.insert({4,3});
// // map<int ,int>::iterator it;//iterator ko declare kiya 
// // for(it=m.begin();it!=m.end();it++){
// //     cout<<(*it).first<<" "<<(*it).second<<endl;//it->first}
// for(auto &pr:m){
//     cout<<pr.first<<" "<<pr.second<<endl;

// }

// }
//Given N strings, print unique strings in lexiographical order with theier frequency 
//N<=10^5  |S|<=100
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	map<string,int>m;
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		string s;
// 		cin>>s;
// 		m[s]++;
// 	}
// 	for(auto pr:m){
// 		cout<<pr.first<<" "<<pr.second<<endl;
// 	}
	
// 	return 0;
// }
/*Given N strings and Q quries.
In each query you are given a string print frequency of that string 
N<=10^6
|S|<=100
Q<=10^6
*/
#include<bits/stdc++.h>
using namespace std;
int main (){
	map<string, int>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
   string s;
   cin>>s;
   m[s]++;

	}
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<m[s]<<endl;
	}
}
#include<bits/stdc++.h>
#include<sstream>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
   int n;
   cin>>n;
   int a=0;
   int c1=0;
   while(n>a){
        n=n-a;
        c1++;
        a=((c1*(c1+1))/2);
   }
   int b=0;
   int c2=0;
   string s1="1";
   while(n>b){
    n=n-b;
    c2++;
    b=c2;
   }
   int d=0;
   int c3=n;
   string ans="";
   for(int i=0;i<c1;i++)
   ans+="1";
   for(int i=0;i<c2;i++)
   ans[i]='2';
   for(int i=0;i<c3;i++)
   ans[i]='3';
   reverse(ans.begin(),ans.end());
   cout<<ans<<endl;

   

}
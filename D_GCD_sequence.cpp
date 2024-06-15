#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

// int gcd(int a,int b){
//     if(b==0)
//     return a;
//     return gcd(b,a%b);
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int b[n];
        for(int i=0;i<n-1;i++)
        b[i]=__gcd(a[i],a[i+1]);
        int idx=-1;
        int flag=0
        for(int i=0;i<n-2;i++){
            if(b[i]>b[i+1]){
                flag=1;
            }
        }
    
        vector<int>ans1,ans2,ans3;
        for(int i=0;i<n;i++){
            if(i!=idx)ans3.push_back(a[i]);
            if(i!=idx+1)ans1.push_back(a[i]);
            if(i!=idx+2)ans2.push_back(a[i]);
        }
        int bas1[n-2],bas2[n-2],bas3[n-2];
        for(int i=0;i<n-2;i++){
            bas1[i]=__gcd(ans1[i],ans1[i+1]);
            bas2[i]=__gcd(ans2[i],ans2[i+1]);
            bas3[i]=__gcd(ans3[i],ans3[i+1]);

        }
        bool flag1=true,flag2=true,flag3=true;
        for(int i=0;i<n-3;i++){
            if(bas1[i]>bas1[i+1]) flag1=false;
            if(bas2[i]>bas2[i+1]) flag2=false;
            if(bas3[i]>bas3[i+1]) flag3=false;

        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        if(!flag1 && !flag2 && !flag3)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
}
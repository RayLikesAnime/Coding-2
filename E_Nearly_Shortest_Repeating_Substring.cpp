#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        int ab=n;
        for(int i=1;i<n;i++){
            if(n%i==0){
                int c=0,d=0;
                string ans=s.substr(0,i);
                string ans0=s.substr(i,i);
                for(int j=0;j<n;j+=i){
                    string ans1=s.substr(j,i);
                    for(int k=0;k<i;k++){
                        if(ans[k]!=ans1[k])
                        c++;
                    }

                }
                for(int j=0;j<n;j+=i){
                    string ans1=s.substr(j,i);
                    for(int k=0;k<i;k++){
                        if(ans0[k]!=ans1[k])
                        d++;
                    }

                }


                if(c==0 || c==1 || d==0 || d==1){
                    flag=1;
                    ab=i;
                    break;
                }
            }
        }
        cout<<ab<<endl;
    }
}
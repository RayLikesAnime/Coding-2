#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int mini=0;
        int i=0,j=0,ind,len=0;
        while(i<b.length()){
            j=0,ind=i,len=0;
            while(j<a.length() && i<b.length()){
                if(b[i]==a[j]){
                    i++;
                    j++;
                    len++;
                }
                else
                j++;
            }
            i=ind+1;
            mini=max(len,mini);
        }
        cout<<a.length()+b.length()-mini<<endl;
    }
}
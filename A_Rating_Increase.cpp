#include<bits/stdc++.h>
#include<sstream>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ind=0;
        int ind0=0;
        for(int i=1;i<s.size();i++){
            if(s[i]!='0'){
                ind=i;
                break;
            }
            else{
                ind0=i;
            }
        }
        string n1,n2;
        if(ind0>0){
            n1=s.substr(0,ind0+1);
            n2=s.substr(ind0+1);
        }
        else{
            n1=s.substr(0,ind);
            n2=s.substr(ind);
        }
        stringstream num1,num2;
        num1<<n1;
        num2<<n2;
        int x=0,y=0;
        num1>>x;
        num2>>y;
        if(y>x)
        cout<<x<<" "<<y<<endl;
        else
        cout<<-1<<endl;

    }
}
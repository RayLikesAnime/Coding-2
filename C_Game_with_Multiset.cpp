#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    while(t--){
        int m;
        cin>>m;
        int freq[50]={0};
        while(m--){
            int x,y;
            cin>>x>>y;
            if(x==1){
                freq[y]++;
            }
            else{
                int freq1[50];
                for(int i=0;i<50;i++){
                    freq1[i]=freq[i];
                }
                int flag=0;
                for(int i=0;i<49;i++){
                    if((y>>i)&1){
                        if(freq1[i])
                        freq1[i]--;
                        else
                        flag=1;
                    }
                    freq1[i+1]=freq1[i+1]+freq1[i]/2;
                }
                if(flag==0)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
    }
}
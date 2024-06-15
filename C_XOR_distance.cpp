#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,r;
        cin>>a>>b>>r;
        ll c=max(a,b);
        ll d=min(a,b);
        ll dif=c-d;
        ll e=d;
        ll ans=0;
        vector<ll>x,y;
        int n=0;
        while(c>0 || d>0){
            x.push_back(c%2);
            y.push_back(d%2);
            c/=2;
            d/=2;
            n++;
        }
        
        for(ll i=n-1;i>=0;i--){
            // if(x[i]==0 && y[i]==1){
            //     if(ans1+pow(2,i)<=r && flag1==0){
            //         ans1+=pow(2,i);
            //         ans3+=pow(2,i);
            //         flag1=1; 
            //     }
            //     else if(ans1+pow(2,i)<=r && flag1==1){
            //         ans3-=pow(2,i);

            //     }
            //     else if(x[i]==1 && y[i]==0)
            //     ans3+=pow(2,i);
            // }
            // // else if(x[i]==1 && y[i]==0)
            // //     ans3-=pow(2,i);
            // if()
            if((x[i]==1 && y[i]==0)){
                if((ans+pow(2,i))<=r){
                        if(pow(2,(i+1))<=dif){
                            ans+=pow(2,i);
                            dif-=(1LL<<(i+1LL));
                        }
                }
            }

        }
        // int ans2=0;
        // int ans4=0;
        // for(int i=0;i<n;i++){
        //     if(x[i]==1 && y[i]==0){
        //         if(ans2+pow(2,i)<=r){
        //             ans2+=pow(2,i);
        //             ans4+=pow(2,i);
        //         }
        //         else if(x[i]==0 && y[i]==1)
        //         ans4+=pow(2,i);
        //     }
        //     // else if(x[i]==0 && y[i]==1)
        //     //     ans4-=pow(2,i);
        // }
        // int ans3=abs((a ^ ans1)-(b^ ans1));
        // int ans4=abs((a ^ ans2)-(b^ ans2));
        cout<<dif<<endl;

    }
}
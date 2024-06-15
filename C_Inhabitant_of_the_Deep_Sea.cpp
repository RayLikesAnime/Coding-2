#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int start=0,end=n-1;
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum<=k){
            cout<<n<<endl;
            continue;
        }
        while(k>0 && ans<n){
            int damage=(2*min(a[start],a[end]));
            if(k>=damage){ 
                ans++;
                k-=damage; 
                if(a[start]<a[end]){ 
                    a[end]-=a[start]; 
                    start++; 
                } 
                else if(a[start]==a[end]){ 
                    start++; 
                    end--; 
                    ans++; 
                } 
                else{ 
                    a[start]-=a[end]; 
                    end--; 
                } 
            } 
            else if(k==damage-1 && a[start]<=a[end]){ 
                ans++; 
                break; 
            } 
            else{ 
                break; 
            } 
        }
        // int freq[n];
        // int which=0;
        // freq[0]=min(arr[0],arr[n-1]);
        // if(arr[0]<=arr[n-1])
        // which=0;
        // else
        // which=1;
        // int start=0,end=n-1;
        // if(which==0){
        //     arr[start]=0;
        //     arr[end]=arr[end]-arr[start]+1;
        // }
        // else{
        //     arr[start]=arr[start]-arr[end];
        //     arr[end]=0;
        // }
        // if(which==0)
        // start++;
        // else
        // end--;
        // for(int i=0;i<n;i++){
        //     freq[i]=min(arr[start],arr[end]);
        //     if(arr[start]<=arr[end])
        // which=0;
        // else
        // which=1;
        // if(which==0){
        //     arr[start]=0;
        //     arr[end]=arr[end]-arr[start]+1;
        // }
        // else{
        //     arr[start]=arr[start]-arr[end];
        //     arr[end]=0;
        // }
        // if(which==0)
        // start++;
        // else
        // end--;
            
        // }
        // int ans=0;
        // int sum=0;
        // int flag=0;
        // if(k<freq[0]*2){
        //     flag=1;
        // }
        // for(int i=0;i<n;i++){
        //     ans++;
        //     if(k<(sum+(freq[i]*2))){
        //         break;
        //     }
        //     sum+=(freq[i]*2);
        // }
        // if(flag==1)
        // cout<<0<<endl;
        // else
        // cout<<ans<<endl;
        cout<<ans<<endl;
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// int mod=1e9+7;
// int func(vector<int>&a,vector<int> &b,int n,bool flag){
//     if(flag==true){
//         int ans=INT_MIN;
//         for(int j=0;j<n;j++){
//             if(a[j]>0 && b[j]>0){
//                 int x=a[j];
//                 int y=b[j];
//                 a[j]--;
//                 b[j]=0;
//                 ans=max(ans,func(a,b,n,false));
//                 a[j]=x;
//                 b[j]=y;
//             }
//         }
//         if(ans==INT_MIN){
//             int sum1=0,sum2=0;
//             for(int i=0;i<n;i++)
//             sum1+=a[i];
//             for(int i=0;i<n;i++)
//             sum2+=b[i];
//             return(sum1-sum2);
//         }
//     }
//     else{
//         int ans=INT_MAX;
//         for(int j=0;j<n;j++){
//             if(a[j]>0 && b[j]>0){
//                 int x=a[j];
//                 int y=b[j];
//                 a[j]=0;
//                 b[j]--;
//                 ans=min(ans,func(a,b,n,true));
//                 a[j]=x;
//                 b[j]=y;
//             }
//         }
//         if(ans==INT_MAX){
//             int sum1=0,sum2=0;
//             for(int i=0;i<n;i++)
//             sum1+=a[i];
//             for(int i=0;i<n;i++)
//             sum2+=b[i];
//             return(sum1-sum2);
//         }
//     }
// }
// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n),b(n);
//         for(int i=0;i<n;i++)
//         cin>>a[i];
//         for(int i=0;i<n;i++)
//         cin>>b[i];
//         cout<<func(a,b,n,true)<<endl;;
//     }
// }
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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair((a[i]+b[i]),i));
        }
        sort(v.rbegin(),v.rend());
        bool flag=true;
        int ans=0;
        for(int i=0;i<n;i++){
            if(flag==true){
                ans+=a[v[i].second];
                ans--;
                flag=false;
            }
            else{
                ans-=b[v[i].second];
                ans++;
                flag=true;
            }

        }
        cout<<ans<<endl;

    }
}
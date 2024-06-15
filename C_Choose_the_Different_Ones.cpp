#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int arr1[a],arr2[b];
        for(int i=0;i<a;i++)
        cin>>arr1[i];
        for(int i=0;i<b;i++)
        cin>>arr2[i];
        int x=0,y=0,z=1;
        
        set<int>s1,s2;
        for(int i=0;i<a;i++){
            if(arr1[i]<=k){
            s1.insert(arr1[i]);
            x++;}
        }
          int flag=0;
        for(int i=0;i<b;i++){
            if(arr2[i]<=k){
            s2.insert(arr2[i]);
            y++;}
        }
        if(s1.size()<k/2 ||s2.size()<k/2)
        flag=1;
        set<int>s3;
        for(auto it : s1){
            s3.insert(it);
        }
        for(auto it : s2){
            s3.insert(it);
        }
        for(int i=1;i<=k;i++){
            if(s3.find(i)!=s3.end())
            continue;
            else{

                flag=1;
                break;
            }
        }
        // for(int i=0;i<k/2;i++){
        //     v.push_back(arr2[i]);
        // }
        // sort()
        // while(true){
            
        //     else if(arr2[y]==z){

        //         int j=x;
        //         for(j=x;j<a;j++){
        //         if(arr1[j]<=z)
        //         continue;
        //         else
        //         break;}
        //         x=j;
        //         int i=y;
        //         for(i=y;i<b;i++){
        //         if(arr2[i]<=z)
        //         continue;
        //         else
        //         break;}
        //         y=i;
        //         z++;
        //     }
        //     else{
        //         flag=1;
        //         break;
        //     }
        // }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}
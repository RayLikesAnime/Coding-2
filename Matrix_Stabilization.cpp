#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int n1=-1,n2=-1,n3=-1,n4=-1;
                if(i!=0)
                n1=arr[i-1][j];
                if(i!=n-1)
                n2=arr[i+1][j];
                if(j!=0)
                n3=arr[i][j-1];
                if(j!=m-1)
                n4=arr[i][j+1];
                if(arr[i][j]>n1 && arr[i][j]>n2 && arr[i][j]>n3 && arr[i][j]>n4)
                arr[i][j]=max(n1,max(n2,max(n3,n4)));
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
}
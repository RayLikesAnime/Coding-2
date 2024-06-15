#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
bool is_sorted(vector<int>v){
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1])
        return false;
    }
    return true;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v,v1,v2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int flag2=0;
        while(!is_sorted(v)){
            int flag=1;
            for(int i=0;i<n;i++){
                int z=v[i];
                vector<int>y;
                if(z==0)
                y.push_back(0);
                else{
                while(z>0){
                    y.push_back(z%10);
                    z/=10;
                }
                }
                if(v[i]>=10){
                    int z1=v[i];
                    flag=0;
                    v.erase(v.begin()+i);
                    for(int j=0;j<y.size();j++){
                        v.insert(v.begin()+i,y[j]);
                    }
                    break;
                }

            }
            if(flag==1){
                flag2=1;
                break;
            }

        }
        if(flag2==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
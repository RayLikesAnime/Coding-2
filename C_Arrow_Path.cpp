#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v;
        string x,y;
        cin>>x>>y;
        v.push_back(x);
        v.push_back(y);
        vector<int>d1(4);
        d1[0]=0;
        d1[1]=0;
        d1[2]=1;
        d1[3]=-1;
        vector<int>d2(4);
        d2[0]=1;
        d2[1]=-1;
        d2[2]=0;
        d2[3]=0;
        vector<pair<int,int> >ans;
        ans.push_back(make_pair(0,0));
        vector<vector<int> >ans1(2,vector<int>(n,0));
        ans1[0][0]=1;
        int flag=0;
        while(!ans.empty()){
            int a=ans[0].first;
            int b=ans[0].second;
            ans.erase(ans.begin());
            if(a==1 && b==n-1){
            cout<<"YES"<<endl;
            flag=1;
            }
            else{
                for(int i=0;i<4;i++){
                    int x1=a+d1[i];
                    int y1=b+d2[i];
                    if(x1<0 || x1>=2 || y1<0 || y1>=n)
                    continue;
                    else{
                        if(v[x1][y1]=='<')
                        y1--;
                        else
                        y1++;
                        if(ans1[x1][y1]!=1){
                            ans1[x1][y1]=1;
                            ans.push_back(make_pair(x1,y1));

                        }
                    }
                }
            }
        }
        if(flag==0)
        cout<<"NO"<<endl;
    }
}
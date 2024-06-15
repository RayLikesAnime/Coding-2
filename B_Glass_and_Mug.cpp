#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,g,m;
    cin>>k>>g>>m;
    int glass=0,mug=0;
    while(k--){
        if(glass==g)
        glass=0;
        else if(mug==0)
        mug=m;
        else{
            if(g-glass>=mug){
                glass=glass+mug;
                mug=0;
            }
            else{
                mug=mug-(g-glass);
                glass=g;
            }
        }

    }
    cout<<glass<<" "<<mug<<endl;
}
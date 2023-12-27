#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y,ans=0;
        cin>>a>>b>>c>>x>>y;

            if(x>a){
                ans+=x-a;
            }
            if(y>b){
                ans+=y-b;
            }
            if(ans<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }
}

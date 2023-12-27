#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s[n],name="vika";
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s[j][i]==name[c]){
                    c++;
                    break;
                }
            }
        }
        if(c==4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

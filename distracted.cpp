#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
            int n,ans=0;
            cin>>n;
            cin>>s;
            for(int i=0;i<n;i++){
                if(s[i]!=s[i+1]){
                    for(int j=i+1;j<n;j++){
                        if(s[j]==s[i]){
                            ans=1;
                            break;
                        }
                    }
                }
            }
            if(ans==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }


    }
    return 0;
}

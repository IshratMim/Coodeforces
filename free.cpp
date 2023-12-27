#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    long long x;
    cin>>n>>x;
    while(n--){
        string s;
        cin>>s;
        long long d;
        cin>>d;
        if(s[0]=='+'){
            x+=d;
        }
        if(s[0]=='-'){
            if(x>=d){
                x-=d;

            }
            else{
                ans++;
            }
        }

    }
    cout<<x<<" "<<ans<<endl;
}

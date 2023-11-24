#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n, ans=0;
        cin>>n;
        while(n){
            ans+=n;
            n/=2;
        }
        cout<<ans<<endl;
    }
}

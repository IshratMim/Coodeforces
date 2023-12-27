#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n;
        long long a[n+1],b[n+1];
        x=10000000007, y=10000000007;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(x>a[i]){
                x=a[i];
            }
        }
        for(int i=0;i<n;i++){
            cin>>b[i];

            if(y>b[i]){
                y=b[i];
            }

        }
        long long ans=0;

        for(int i=0;i<n;i++){
            ans+=max(a[i]-x,b[i]-y);
        }
        cout<<ans<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,minn,ans=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        minn=a[0];
        for(int i=0;i<n;i++){

            if(minn>a[i]){
                minn=a[i];
            }
        }
        for(int i=0;i<n;i++){
            ans+=a[i]-minn;
        }
        cout<<ans<<endl;
    }
}

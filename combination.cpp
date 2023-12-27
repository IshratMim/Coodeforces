#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++){
        ans+=min((abs(a[i]-b[i])),((10-max(a[i],b[i]))+min(a[i],b[i])));
    }
    cout<<ans<<endl;
}

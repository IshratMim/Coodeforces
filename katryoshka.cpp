#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    int cnt=0;
    cin>>n>>m>>k;
    long long ans=min(n,min(m,k));
    if(n-ans>2 && k-ans>1){
        ans+=min((n-ans)/2,k-ans);
    }
    cout<<ans<<endl;


}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int cnt=0,mx=0;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            cnt=max(a[i],a[i+1])*min(a[i],a[i+1]);
            mx=max(cnt,mx);
        }
        cout<<mx<<endl;
    }
}

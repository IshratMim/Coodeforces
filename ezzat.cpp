#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,b=-999999999;
        cin>>n;
        long long ans=0;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b=max(a[i],b);
            ans+=a[i];
        }

         double res=((float)(ans-b)/(n-1))+b;
         cout<<fixed;
         cout<<setprecision(9);
        cout<<res<<endl;
    }
}

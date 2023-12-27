#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       cout<<max(max(b,c)-a+1,0)<<" "<<max(max(a,c)-b+1,0)<<" "<<max(max(a,b)-c+1,0)<<endl;
    }
}

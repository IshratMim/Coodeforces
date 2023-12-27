#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=abs(a-b);
    if( (a>0 && b>0)  && ans<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

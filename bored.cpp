#include<bits/stdc++.h>
using namespace std;
int main()
{

        int a,b,s=1;
        cin>>a>>b;
        int mini=min(a,b);
        for(int i=1;i<=mini;i++){
            s=s*i;
        }
        cout<<s<<endl;

}

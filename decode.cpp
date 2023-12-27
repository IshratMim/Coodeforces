#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        int n,x;
        string s="",t;
        cin>>n>>t;

        for(int i=n-1;i>=0;i--){
            if(t[i]=='0'){
                x=(t[i-2]-'0')*10+(t[i-1]-'0');
                i-=2;
            }
            else{
                x=(t[i]-'0');
            }
            s+=(char)(x+'a'-1);
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}

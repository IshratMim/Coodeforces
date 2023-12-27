#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m=0;
        char c;

        string s;
        cin>>s;
        cin>>c;
        for(int i=0;i<s.size();i++){
            if(s[i]==c && i%2==0){
                m=1;



            }

        }
        if(m==1){
            cout<<"YES"<<endl;
        }

        else
            cout<<"NO"<<endl;
    }
}

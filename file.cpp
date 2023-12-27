#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,cnt=1;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<=n;i++){
        if(s[i]=='x' && s[i+1]=='x'){
            cnt++;
            if(cnt>=3){
                a++;
            }

        }
        else{
            cnt=1;


        }
    }
    cout<<a<<endl;

}

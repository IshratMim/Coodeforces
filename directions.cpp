#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0,c=-1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                x++;
            }
            else if(s[i]=='D'){
                x--;
            }
             else if(s[i]=='R'){
                y++;
            }
             else if(s[i]=='L'){
                y--;
            }
            if(x==1 && y==1){
                c=1;
                break;
            }

        }
        if(c==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

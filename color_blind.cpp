#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=1;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            if(s1[i]=='B'){
                s1[i]='G';
            }
        }
        for(int i=0;i<n;i++){
            if(s2[i]=='B'){
                s2[i]='G';
            }
        }
        for(int i=0;i<n;i++){

            if(s1[i]!=s2[i]){

                c=0;
            }

        }
        if(c==0){
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }
}

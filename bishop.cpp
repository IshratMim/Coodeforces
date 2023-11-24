#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       char s[8][8];
        for(int i=0;i<8;i++){
                for(int j=0;j<8;j++)
                {
                    cin>>s[i][j];
                }
           }
        int r=0,c=0;
         for(int i=1;i<8;i++){
            for(int j=1;j<8;j++){
               if(s[i][j]=='#' && s[i-1][j-1]=='#' && s[i+1][j-1]=='#' ){
              r=i+1;
              c=j+1;
                break;
               }
            }
        }
        cout<<r<<" "<<c<<endl;

    }
    return 0;
}

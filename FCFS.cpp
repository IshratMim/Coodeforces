#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[100]={0},at[100]={0},bt[100]={0},ct[100]={0},tat[100]={0},wt[100]={0},sum=0;
    float total_tat=0,total_wt=0;
    cout<<"enter the number of processes: "<<endl;
    cin>>n;
    cout<<"enter process of sequence: "<<endl;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
     cout<<"enter arrival time: "<<endl;
    for(int i=0;i<n;i++){
        cin>>at[i];
    }
    cout<<"enter burst time: "<<endl;
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }
    for(int i=0;i<n;i++){
            {

      for(int j=i+1;j<n;j++)
      if(at[i]>at[j]){
        swap(at[i],at[j]);
        swap(bt[i],bt[j]);
        swap(p[i],p[j]);
      }
    }
    }
    for(int i=0;i<n;i++){
        sum+=bt[i];
        ct[i]+=sum;
    }
    for(int i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        total_tat+=tat[i];
        wt[i]=tat[i]-bt[i];
        total_wt+=wt[i];
    }
    cout<<"solution: "<<endl;
    cout<<"process\t AT\t BT\t CT\t TAT\t WT\t\n\n";
    for(int i=0;i<n;i++){
        cout<<p[i]<<"\t"<<at[i]<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\t\n";
    }

    cout<<"\n average turn around time: "<<total_tat/n<<endl;
    cout<<"\n average waiting time: "<<total_wt/n<<endl;

}

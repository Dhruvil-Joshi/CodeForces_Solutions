#include<bits/stdc++.h>
using namespace std;
 
void Good_String()
{
    long long int len;
    cin>>len;
    for(long long int i=0;i<len;i++)
    {
      long long int n,m;
      cin>>n>>m;
      string s,t;
      cin>>s>>t;
      bool flag=true,sn=true,tn=true;
      for(int j=0;j<n-1;j++)
      {
          if(s[j]==s[j+1])
          sn=false;
      }
      for(int j=0;j<m-1;j++)
      {
          if(t[j]==t[j+1])
          tn=false;
      }
      if(sn)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          if(tn==false)
          cout<<"NO"<<endl;
          else{
            for(int j=0;j<n-1 && flag==true;j++)
            {
                if(s[j]==s[j+1])
                {
                  if((s[j]=='0' && (t[0]=='0'||t[t.size()-1]=='0'))||(s[j]=='1' && (t[0]=='1'||t[t.size()-1]=='1')))
                  flag=false;
                }
            }
            if(flag)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
          }
       }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Good_String();
    return 0;
}
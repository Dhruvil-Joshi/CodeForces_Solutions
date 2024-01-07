#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(long long int x=0;x<loop;x++)
    {
        int flag=0;
        string s;
        cin>>s;
        if(s.size()%2!=0)
        cout<<"NO"<<endl;
        else
        {
            int n=s.size()/2;
            for(int i=0;(i<n) && (flag==0);i++)
            {
                if(s[i]!=s[i+n])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
        return 0;
    }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> count;
    vector<string> s;
    string r;
    cin>>r;
    s.push_back(r);
    count.push_back(0);
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        cin>>r;
        int length=s.size();
        for(int j=length-1;j>=0;j--)
        {
            if(r==s[j])
            {
                flag=1;
                s.push_back(r);
                count.push_back(count[j]+1);
                break;
            }
        }
        if(flag==0)
        {
            s.push_back(r);
            count.push_back(0);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(count[i]==0)
        cout<<"OK"<<endl;
        else
        cout<<s[i]<<count[i]<<endl;
    }
    return 0;
}
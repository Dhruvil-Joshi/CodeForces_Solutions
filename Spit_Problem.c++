#include<bits/stdc++.h>
using namespace std;
 
void Spit_Problem()
{
    int n;
    cin>>n;
    vector<int> camel1;
    vector<int> camel2;
    for(int i=0;i<n;i++)
    {
        int c1,c2;
        cin>>c1>>c2;
        camel1.push_back(c1);
        camel2.push_back(c2);
    }
    bool flag=true;
    for(int i=0;i<n-1 && flag==true;i++)
    {
        for(int j=i+1;j<n && flag==true;j++)
        {
            if(camel1[i]+camel2[i]==camel1[j] && camel1[j]+camel2[j]==camel1[i])
            flag=false;
        }
    }
    if(flag)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Spit_Problem();
    return 0;
}
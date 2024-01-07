#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int x=0;x<loop;x++)
    {
    int n;
    int flag=0;
    cin>>n;
    vector<int> list;
    vector<int> sortedlist;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        list.push_back(temp);
    }
    sortedlist=list;
    sort(sortedlist.begin(),sortedlist.end());
    for(int i=0;i<n;i++)
    {
        if((((list[i]%2)==0)&&((sortedlist[i]%2)!=0))||(((list[i]%2)!=0)&&((sortedlist[i]%2)==0)))
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
    return 0;
}
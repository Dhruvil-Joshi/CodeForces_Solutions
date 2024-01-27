#include<bits/stdc++.h>
using namespace std;
 
void Cover_in_Water()
{
    long long int len;
    cin>>len;
    for(long long int i=0;i<len;i++)
    {
        long long int n;
        cin>>n;
        vector<int> empty;
        for(long long int j=0;j<n;j++)
        {
            char temp;
            cin>>temp;
            if(temp=='.')
            empty.push_back(j);
        }
        bool flag=false;
        for(int j=2;j<empty.size() && flag==false;j++)
        {
            if(empty[j-2]==(empty[j-1]-1) && empty[j-2]==(empty[j]-2))
            flag=true;
        }
        if(flag)
        cout<<2<<endl;
        else
        cout<<empty.size()<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Cover_in_Water();
    return 0;
}
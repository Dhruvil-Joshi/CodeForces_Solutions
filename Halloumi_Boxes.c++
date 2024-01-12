#include<bits/stdc++.h>
using namespace std;
 
void  Halloumi_Boxes()
{
    long long int loop;
    cin>>loop;
    for(long long int i=0;i<loop;i++)
    {
        long long int n,k;
        cin>>n>>k;
        vector<long long int> arr;
        vector<long long int> sortedarr;
        for(long long int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            sortedarr.push_back(temp);
        }
        arr=sortedarr;
        sort(sortedarr.begin(),sortedarr.end());
        if(k==1)
        {
            if(arr==sortedarr)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     Halloumi_Boxes();
    return 0;
}
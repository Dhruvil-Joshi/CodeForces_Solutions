#include<bits/stdc++.h>
using namespace std;
 
void Minimize_Inversion()
{
    long long int len;
    cin>>len;
    for(long long int i=0;i<len;i++)
    {
        long long int size;
        cin>>size;
        vector<long long int> a;
        vector<long long int> b;
        for(long long int j=0;j<size;j++)
        {
            long long int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(long long int j=0;j<size;j++)
        {
            long long int temp;
            cin>>temp;
            b.push_back(temp);
        }
        
        vector<vector<long long int>> mix;
        for(long long int j=0;j<size;j++)
        {
            mix.push_back({a[j],b[j]});
        }
        sort(mix.begin(),mix.end());
        for(long long int j=0;j<size;j++)
        {
            cout<<mix[j][0]<<" ";
        }
        cout<<endl;
        for(long long int j=0;j<size;j++)
        {
            cout<<mix[j][1]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Minimize_Inversion();
    return 0;
}
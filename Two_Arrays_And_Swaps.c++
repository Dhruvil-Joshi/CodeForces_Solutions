#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int size;
    cin>>size;
    for(int j=0;j<size;j++)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        int i=0;
        while(flag && k)
        {
            if(a[i]<b[n-1-i])
            {
                sum=sum-a[i]+b[n-1-i];
                i++;
                k--;
            }
            else
            flag=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}
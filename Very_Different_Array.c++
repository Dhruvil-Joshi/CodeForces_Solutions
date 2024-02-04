#include<bits/stdc++.h>
using namespace std;
 
void Very_Different_Array()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        long long int n,m;
        cin>>n>>m;
        vector<long long int> a(n);
        vector<long long int> b(m);
        for(long long int i=0;i<n;i++)
        cin>>a[i];
        for(long long int i=0;i<m;i++)
        cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long int right=m-1,ans=0;
        for(long long int i=0;i<n;i++)
        {
            if(abs(a[i]-b[right])>=abs(a[i]-b[n-i-1]))
            {
                ans+=abs(a[i]-b[right]);
                right--;
            }
            else
            ans+=abs(a[i]-b[n-i-1]);
        }
        cout<<ans<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Very_Different_Array();
    return 0;
}

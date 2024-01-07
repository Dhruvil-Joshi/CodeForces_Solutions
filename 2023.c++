#include <bits/stdc++.h>
using namespace std;
void goodbye()
{
    long long int loop;
    cin >> loop;
    for (long long int i = 0; i < loop; i++)
    {
        int j,n,k;
        cin>>n>>k;
        long long int val=1;
        for(j=0;j<n;j++)
        {
            int temp;
            cin>>temp;
            val=val*temp;
        }
         if(2023%val==0)
        {
            cout<<"YES"<<endl;
            cout<<2023/val;
            for(j=1;j<k;j++)
            {
                cout<<" "<<1;
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }   
    }
}
int main()
{
    goodbye();
    return 0;
}
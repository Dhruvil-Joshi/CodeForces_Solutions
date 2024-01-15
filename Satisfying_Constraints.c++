#include<bits/stdc++.h>
using namespace std;
 
void  Satisfying_Constraints()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        long long int max1=0,max2=0;
        vector<long long int> max3;
        
        bool flag=true;
        for(long long int j=0;j<n;j++)
        {
            int a;
            long long int x;
            cin>>a>>x;
            if(a==1 && max1<x)
            {
                max1=x;
            }
            else if(a==2)
            {
                if(max2==0)
                max2=x;
                else if(max2>x)
                max2=x;
            }
            else if(a==3)
            {
                max3.push_back(x);
            }
        }
        if(max2<max1)
        cout<<0<<endl;
        else
        {
            int count=0;
            for(int j=0;j<max3.size();j++)
            {
                if(max3[j]<=max2 && max3[j]>=max1)
                count++;
                
            }
            cout<<max2-max1+1-count<<endl;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Satisfying_Constraints();
    return 0;
}
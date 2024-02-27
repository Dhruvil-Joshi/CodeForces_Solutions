#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        long long int size;
        cin>>size;
        vector<long long int> arr;
        long long int count=0,arrcount=0;
        for(long long int j=0;j<size;j++)
        {
            long long int temp;
            cin>>temp;
            count+=temp;
            if(temp%3!=0)
            {
                arr.push_back(temp);
                arrcount+=temp;
            }
        }
        if(count%3==0)
        cout<<0<<endl;
        else
        {
                bool flag=true;
                if((arrcount+1)%3==0)
                {
                    flag=false;
                    cout<<1<<endl;
                }
                if(flag==true)
                {
                    for(long long int j=0;j<arr.size()&flag==true;j++)
                    {
                        if((arrcount-arr[j])%3==0)
                        {
                            cout<<1<<endl;
                            flag=false;
                        }
                    }
                }
                if((arrcount+2)%3==0 && flag==true)
                cout<<2<<endl;
        }
    }
}
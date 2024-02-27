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
        long long int answer=0;
        for(long long int j=0;j<size;j++)
        {
            long long int temp;
            cin>>temp;
            if(temp<0)
            answer=answer+((-1)*(temp));
            else
            answer+=temp;
        }
        cout<<answer<<endl;
    }
}
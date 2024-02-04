#include<bits/stdc++.h>
using namespace std;
 
void Showstopper()
{
    int len;
    cin>>len;
    for(int x=0;x<len;x++)
    {
        int n;
        cin>>n;
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
        int max1,max2;
        max1=*max_element(a.begin(),a.end());
        max2=*max_element(b.begin(),b.end());
        bool flag=true;
        if((max1>a[n-1] && max1>b[n-1] )||(max2>a[n-1] && max2>b[n-1] ))
        flag=false;
        for(int i=0;i<n-1 && flag==true;i++)
        {
            if(a[i]>a[n-1] || b[i]>b[n-1])
            {
                if((a[i]>a[n-1] && b[i]>a[n-1] )||(a[i]>b[n-1] && b[i]>b[n-1]))
                {
                    flag=false;
                }
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Showstopper();
    return 0;
}
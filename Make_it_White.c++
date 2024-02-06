#include<bits/stdc++.h>
using namespace std;
 
void Make_it_White()
{
    int len;
    cin>>len;
    for(int x=0;x<len;x++)
    {
        int n;
        cin>>n;
        char arr[n];
        int min1=-1;
        int min2=-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]=='B' && min1==-1)
            min1=i;
            else if(arr[i]=='B')
            min2=i;
        }
        if(min1==-1)
        cout<<0<<endl;
        else if(min2==-1)
        cout<<1<<endl;
        else 
        cout<<min2-min1+1<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Make_it_White();
    return 0;
}
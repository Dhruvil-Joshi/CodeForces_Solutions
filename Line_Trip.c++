#include<bits/stdc++.h>
using namespace std;

void LineTrip()
{
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++)
    {
        int n,x;
        cin>>n>>x;
        int max=0,temp=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a-temp>max)
            max=a-temp;
            temp=a;
        }
        if((x-temp)*2>max)
        max=(x-temp)*2;
        cout<<max<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LineTrip();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(long long int j=0;j<loop;j++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(c%2!=0 && a==b)
        cout<<"First"<<endl;
        else if(c%2==0 && a==b)
        cout<<"Second"<<endl;
        else
        {
            if(a>b)
            cout<<"First"<<endl;
            else
            cout<<"Second"<<endl;
        }
    }
    return 0;
}
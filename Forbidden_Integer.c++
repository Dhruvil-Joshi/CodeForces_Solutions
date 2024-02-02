#include<bits/stdc++.h>
using namespace std;
 
void Forbidden_Integer()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(k==x && x==1)
        cout<<"NO"<<endl;
        else
        {
            if(x!=1)
            {
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0;i<n;i++)
                cout<<1<<" ";
                cout<<endl;
            }
            else if(k==n && x!=k)
            {
                cout<<"YES"<<endl;
                cout<<1<<endl;
                cout<<k<<endl;
            }
            else if(k==2 && x==1 && n%2!=0)
            cout<<"NO"<<endl;
            else if(k>=2 && x==1 && n%2==0)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++)
                cout<<2<<" ";
                cout<<endl;
            }
            else if(k>2 && x==1 && n%2!=0)
            {
                int temp=n/2;
                temp=temp-1;
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<temp;i++)
                cout<<2<<" ";
                cout<<3<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Forbidden_Integer();
    return 0;
}
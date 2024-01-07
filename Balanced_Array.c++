#include <iostream>
    using namespace std;
    int main() {
        int loop;
        cin>>loop;
        for(int j=0;j<loop;j++)
        {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<"NO"<<endl;
        }
        else if(n%4==0)
    {
        cout<<"YES"<<endl;
        int add1=0,add2=0,count =2;
    for(int i=1;i<=n/2;i++)
    {
        cout<<count<<" ";
        count+=2;
        add1+=(2*i);
    }
        count=1;
    for(int i=0;i<(n/2)-1;i++)
    {
        cout<<count<<" ";
        add2+=count;
        count+=2;
    }
        cout<<add1-add2<<endl;
    }
        else
        {
        cout<<"NO"<<endl;
        }
    }
 return 0;
}
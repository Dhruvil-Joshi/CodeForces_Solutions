#include <iostream>
using namespace std;
int main() {
    string a;
    cin>>a;
    int N=a.size();
    int size=N,count=0,ans=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<N-1;j++) 
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count++;
            }
        }
         N--;
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]!=a[j])
            {
                i=j;
                ans++;
                continue;
            }
        }
    }
    ans+=1;
    if(ans%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
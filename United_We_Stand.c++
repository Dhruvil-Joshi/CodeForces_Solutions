#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int total,n;
    cin>>total;
    for(int i=0;i<total;i++)
    {
        int cnt=0,even=0,odd=0;
        cin>>n;
    vector<int> arr;
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
        if(arr[i]==arr[0])
        {
            cnt++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    if(cnt==n)
    {
        cout<<-1<<endl;
    }
    else
    {
            if(even==n || odd==n)
            {
              int max=*max_element(arr.begin(),arr.end());
              for(int i=0;i<n;i++)
              {
                  if(arr[i]==max)
                  {
                      c.push_back(arr[i]);
                  }
                  else
                  {
                      b.push_back(arr[i]);
                  }
               }
               cout<<b.size()<<" "<<c.size()<<endl;
                for(int i=0;i<b.size();i++)
                {
                    cout<<b[i]<<" ";
                }
                cout<<endl;
                for(int i=0;i<c.size();i++)
                {
                    cout<<c[i]<<" ";
                }
                cout<<endl;
                b.clear();
                c.clear();
            }
            else
            {
                for(int i=0;i<n;i++)
              {
                if(arr[i]%2!=0)
                {
                    b.push_back(arr[i]);
                }
                else
                {
                    c.push_back(arr[i]);
                }
              }
              cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++)
            {
                cout<<c[i]<<" ";
            }
                cout<<endl;
                b.clear();
                c.clear();
            }
    }
    }
    return 0;
}

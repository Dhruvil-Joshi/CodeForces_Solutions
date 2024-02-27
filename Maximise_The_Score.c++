#include<bits/stdc++.h>
using namespace std;

void maximise_the_score()
{
    long long int loop;
    cin>>loop;
    for(long long int x=0;x<loop;x++)
    {
        long long int n;
        cin>>n;
        vector<long long int> a;
        for(long long int i=0;i<2*n;i++)
        {
            long long int temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        long long int count=0,score=0;
        long long int i=(2*n)-2;
        while(count!=n)
        {
            score+=a[i];
            i=i-2;
            count++;
        }
        cout<<score<<endl;
    }
}

int main()
{
    maximise_the_score();
    return 0;
}
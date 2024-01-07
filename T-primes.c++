#include <bits/stdc++.h>
using namespace std;
bool primenums [1000000][2]  = {false};
void isprime(long long int num)
{
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            primenums[num][0]=false;
            primenums[num][1]=true;
            return;
        }
    }
    primenums[num][0]=true;
    primenums[num][1]=true;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        long long int num;
        cin>>num;
        if(num==1 || num==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            long long int temp = sqrt(num);
            if(temp*temp==num)
            {
                if(!primenums[temp][1])
                isprime(temp);
                if((!primenums[temp][0]) && (primenums[temp][1]))
                {
                    cout<<"NO"<<endl;
                }
                else if((primenums[temp][0]) && (primenums[temp][1]))
                {
                    cout<<"YES"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

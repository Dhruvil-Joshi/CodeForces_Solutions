#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int loop;
    cin >> loop;
    for (long long int i = 0; i < loop; i++)
    {
        long long int n,P,l,t;
        cin>>n>>P>>l>>t;
        long double tasknum = ceil((double)n/7);
        long double pairs=floor(tasknum/2);
        long long int freedays=n;
         if(P>0)
        {
            long double pairvalue=(2*t)+l;
            double temp=ceil((double)P/pairvalue);
            if(temp<pairs)
            {
                P=P-(temp*pairvalue);
                freedays=freedays-temp;
            }
            else
            {
                P=P-(pairs*pairvalue);
                freedays=freedays-pairs;
            }
        }
        if((P>0) && (((int)tasknum%2)==1))
        {
            P=P-(t+l);
            freedays--;
        }
        if(P>0)
        {
            long double lessondays= ceil((double)P/l);
            freedays=freedays-lessondays;
        }
        cout << freedays << endl;
    }
    return 0;
}

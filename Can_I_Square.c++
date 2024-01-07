#include <bits/stdc++.h>
using namespace std;
 
void Square()
{
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        long long int n;
        cin>>n;
        long long int val=0;
        while(n!=0)
        {
            long long int num;
            cin>>num;
            val+=num;
            n--;
        }
        long long int answer=sqrt(val);
        if(val==answer*answer)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Square();
    return 0;
}
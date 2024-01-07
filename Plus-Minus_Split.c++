#include <bits/stdc++.h>
using namespace std;
 
void Penalty()
{
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        int n,ans=0;
        cin>>n;
        while(n!=0)
        {
            char temp;
            cin>>temp;
            if(temp=='+')
            ans++;
            else
            ans--;
            n--;
        }
        cout<<abs(ans)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Penalty();
    return 0;
}
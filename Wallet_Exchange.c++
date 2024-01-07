#include <bits/stdc++.h>
using namespace std;
 
void Game()
{
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        long long int a,b;
        cin>>a>>b;
        if((a-b)%2==0)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Game();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin >> loop;
    for (long long int x = 0; x < loop; x++)
    {
        string s = "";
        for (int i = 0; i < 4; i++)
        {
            char temp;
            cin >> temp;
            if (temp == '0')
            {
                temp = ':';
            }
            s += temp;
        }
        int count = 0;
        count = s[0] - 48;
        if (count < 0)
        {
            count = count * -1;
        }
        // cout<<count<<" ";
        for (int i = 1; i < 4; i++)
        {
            int temp = s[i] - s[i - 1];
            if (temp < 0)
            {
                temp = temp * -1;
            }
            count += temp + 1;
            // cout<<temp+1<<" ";
        }
        cout << count << endl;
    }
    return 0;
}
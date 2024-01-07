#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Check this comment
    long long int loop;
    cin >> loop;
    for (long long int i = 0; i < loop; i++)
    {
        string s;
        cin >> s;
        vector<int> Big;
        vector<int> Small;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'b')
            {
                if (!Small.empty() && Small.size()!=0)
                {
                    Small.erase(Small.end()-1);
                }
                else
                {
                    
                }
            }
            else if (s[j] == 'B')
            {
                if (!Big.empty())
                {
                    Big.pop_back();
                }
                else{
                    continue;
                }
            }
            else
            {
                if (s[j] >= 'A' && s[j] <= 'Z')
                {
                    Big.push_back(j);
                }
                else
                {
                    Small.push_back(j);
                }
            }
        }
        for(int j=0;j<Big.size();j++)
        {
            Small.push_back(Big[j]);
        }
        sort(Small.begin(),Small.end());
        if(!Small.empty())
        {
            for (int j = 0; j < Small.size(); j++)
            {
              cout<<s[Small[j]];
            }   
        }
        cout<<endl;
    }
    return 0;
}
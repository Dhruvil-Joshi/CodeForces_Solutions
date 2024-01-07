#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop_no;
    cin>>loop_no;
    for(int j=0;j<loop_no;j++)
    {
        long long int n;
        cin>>n;
        int count=0;
        int display_num=0;
        vector<int> digits;
        while(n!=0)
        {
           int temp;
            temp=n%10;
            digits.push_back(temp);
            if(temp!=0)
            display_num++;
            n=n/10;
            count++;
        }
        cout<<display_num<<endl;
        for(int i=0;i<count;i++)
        {
            if(digits[i]!=0)
            cout<<digits[i]*pow(10,i)<<" ";
        }   
        cout<<endl;
    }
    return 0;
}
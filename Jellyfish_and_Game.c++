#include<bits/stdc++.h>
using namespace std;
 
void Jellyfish_and_Game()
{
    int len;
    cin>>len;
    for(int x=0;x<len;x++)
    {
        int n,m;
        long long int k;
        cin>>n>>m>>k;
        long long int Jellyfish=0,jellymin=0,gellymax=0,jellymax=0,gellymin=0;
        cin>>jellymin;
        jellymax=jellymin;
        Jellyfish=jellymax;
        for(int i=1;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            if(jellymin>temp)
            jellymin=temp;
            if(jellymax<temp)
            jellymax=temp;
            Jellyfish+=temp;
        }
        cin>>gellymin;
        gellymax=gellymin;
        for(int i=1;i<m;i++)
        {
            long long int temp;
            cin>>temp;
            if(gellymin>temp)
            gellymin=temp;
            if(gellymax<temp)
            gellymax=temp;
        }
        if(k%2==0)
        {
            if(jellymin<gellymax)
            {
                if(jellymax<gellymax)
                {
                    if(jellymin<gellymin)
                    cout<<Jellyfish<<endl;
                    else
                    cout<<Jellyfish-jellymin+gellymin<<endl;
                }
                else
                {
                    if(jellymin<gellymin)
                    cout<<Jellyfish-jellymax+gellymax<<endl;
                    else
                    cout<<Jellyfish-jellymax+gellymax-jellymin+gellymin<<endl;
                }
            }
            else
            cout<<Jellyfish+gellymin-jellymax<<endl;
        }
        else
        {
            if(gellymax<=jellymin)
            cout<<Jellyfish<<endl;
            else
            cout<<Jellyfish+gellymax-jellymin<<endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Jellyfish_and_Game();
    return 0;
}
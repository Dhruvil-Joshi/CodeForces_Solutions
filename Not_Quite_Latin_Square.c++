#include <bits/stdc++.h>
using namespace std;
 
void Latinletter()
{
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        int A=0,B=0,C=0;
        for(int i=0;i<9;i++)
        {
            char letter;
            cin>>letter;
            if(letter=='A')
            A++;
            else if(letter=='B')
            B++;
            else if(letter=='C')
            C++;
        }
        if(A==2)
        cout<<"A"<<endl;
        else if(B==2)
        cout<<"B"<<endl;
        else
        cout<<"C"<<endl;
    }
}
int main()
{
    Latinletter();
    return 0;
}
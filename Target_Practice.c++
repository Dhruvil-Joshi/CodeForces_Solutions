#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(long long int j=0;j<loop;j++)
    {
        char arrow[10][10];
        int points=0;
        for(int row=0;row<10;row++)
        {
            for(int col=0;col<10;col++)
            {
                cin>>arrow[row][col];
                if(arrow[row][col]=='X')
                {
                    if(row==0 || col==0 || row==9 || col==9)
                    {
                        points+=1;
                    }
                    else if(((row==1)&&(col<9 && col>0))||((row==8)&&(col<9 && col>0))||((col==1)&&(row<9 && row>0))||((col==8)&&(row<9 && row>0)))
                    {
                        points+=2;
                    }
                    else if(((row==2)&&(col<8 && col>1))||((row==7)&&(col<8 && col>1))||((col==2)&&(row<8 && row>1))||((col==7)&&(row<8 && row>1)))
                    {
                        points+=3;
                    }
                    else if(((row==3)&&(col<7 && col>2))||((row==6)&&(col<7 && col>2))||((col==3)&&(row<7 && row>2))||((col==6)&&(row<7 && row>2)))
                    {
                        points+=4;
                    }
                    else
                    {
                        points+=5;
                    }
                }
            }
        }
        cout<<points<<endl;
    }
    return 0;
}
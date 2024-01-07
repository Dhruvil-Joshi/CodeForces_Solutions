#include <iostream>
using namespace std;
int main() {
    int loop;
    cin>>loop;
    for(int i=0;i<loop;i++)
    {
        int num;
        cin>>num;
        int newnum=0;
        int count=0;
        while(count!=num)
        {
            newnum++;
            if(!((newnum%3)==0 || (newnum%10)==3)){
                count++;
            }
        }
        cout<<newnum<<endl;
    }
    return 0;
}
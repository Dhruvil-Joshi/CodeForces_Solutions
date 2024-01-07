#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    float sum = 0;
    for(int i=0;i<x;i++)
    {
        float n;
        cin>>n;
        sum = sum+n;
    }
    float result;
    result=sum/x;
    printf("%.12f",result);
    return 0;
}
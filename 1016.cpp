#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int PA=0,PB=0;
    int DA,DB;
    int A,B;
    int n1=1,n2=1;
    int count1=0,count2=0;
    cin >> A >> DA >> B >> DB;
    while (A>0)
    {
        int temp1=A%10;
        if (temp1==DA)
        {
            count1++;
        }
        A/=10;
    }
    while (B>0)
    {
        int temp2=B%10;
        if (temp2==DB)
        {
            count2++;
        }
        B/=10;
    }
    for (int i = 0; i < count1; i++)
    {
        PA+=(DA*n1);
        n1*=10;
    }
    for (int i = 0; i < count2; i++)
    {
        PB+=(DB*n2);
        n2*=10;
    }
    cout << (PA+PB);
}
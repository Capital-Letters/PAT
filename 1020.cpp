#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct yuebing
{
    float s;
    float p;
    float sp;
};
void swap(yuebing &y1,yuebing &y2)
{
    yuebing temp;
    temp=y1;
    y1=y2;
    y2=temp;
}
void sort(yuebing y[],int n)
{
    for(int i=0; i<n-1;i++)
    {
        int flag=0;
        for (int j = n-1; j > i; j--)
        {
            if(y[j].sp>y[j-1].sp)
            {
                swap(y[j],y[j-1]);
                flag=1;
            }
        }
        if (!flag)
        {
            return;
        }
        
    }
}
int main()
{
    int N,D;
    float sum=0;
    cin >> N >> D;
    yuebing y[N];
    for (int i = 0; i < N; i++)
    {
        cin >> y[i].s;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> y[i].p;
        y[i].sp=y[i].p/y[i].s;
    }
    sort(y,N);
    for (int i = 0; i < N && D!=0; i++)
    {
        if (y[i].s<=D)
        {
            D-=y[i].s;
            sum+=y[i].p;
        }
        else
        {
            sum+=(D*y[i].sp);
            D=0;
        }
    }
    printf("%.2f",sum);
}
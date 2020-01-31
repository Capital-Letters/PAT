#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a,b;
    double r[n];
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        r[i]=sqrt(a*a+b*b);
    }
    double max=r[0];
    for(int i=0;i<n;i++)
    {
        if(r[i]>max) max=r[i];
    }
    printf("%.2lf",max);
}
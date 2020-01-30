#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    double e;
    scanf("%d%lf%d",&n,&e,&d);
    int c1=0,c2=0;
    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d",&k);
        double power;
        int count=0;
        for(int j=0;j<k;j++)
        {
            scanf("%lf",&power);
            if(power<e)
            {
                count++;
            }
        }
        if(count>k/2.0)
        {
            if(k>d) c1++;
            else c2++;
        }
    }
    printf("%.1lf%% %.1lf%%",c2*1.0/n*100,c1*1.0/n*100);
}
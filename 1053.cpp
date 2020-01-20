#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    double e;
    int D;
    int n;
    int count;
    scanf("%d%lf%d",&N,&e,&D);
    double kongzhi1=0.0,kongzhi2=0.0;
    for (int i=0; i < N; i++)
    {
        scanf("%d",&n);
        count=0;
        for(int j=0;j<n;j++)
        {
            int temp;
            scanf("%lf",&temp);
            if(temp<e)
            {
                count++;
            }
        }
        if(count>n/2&&n<=D) kongzhi1++;
        if(count>n/2&&n>D)  kongzhi2++;
    }
    double rate1=kongzhi2/N*100;
    double rate2=kongzhi1/N*100;
    printf("%.1lf",rate1);
    cout << "% ";
    printf("%.1lf",rate2);
    cout<< "%";
}
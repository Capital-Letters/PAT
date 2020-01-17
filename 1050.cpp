#include<bits/stdc++.h>
using namespace std;
int func(int N)
{
    int i=sqrt(N);
    while (i>=1)
    {
        if(N%i==0)
        {
            return i;
        }
        i--;
    }
    return 1;
}
int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}

int main()
{
    int N,m,n,t=0;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    qsort(a,N,sizeof(a[0]),cmp);
    n=func(N);
    m=N/n;
    int level=n/2+n%2;
    int i,j;
    for ( i = 0; i < level; i++)
    {
        for(j=i;j<=n-1-i&&;j++)
        {
            b[i][j]=a[t++];
        }
        for(j=i+1)
    }
    
}
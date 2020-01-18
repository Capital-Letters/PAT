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
    int b[m][n];
    int level=n/2+n%2;
    int i,j;
    for ( i = 0; i < level; i++)
    {
        for(j=i;j<=n-1-i&&t<=N-1;j++)
        {
            b[i][j]=a[t++];
        }
        for(j=i+1;j<=m-2-i&&t<=N-1;j++)
        {
            b[j][n-1-i]=a[t++];
        }
        for(j=n-1-i;j>=i&&t<=N-1;j--)
        {
            b[m-1-i][j]=a[t++];
        }
        for(j=m-2-i;j>=i+1&&t<=N-1;j--)
        {
            b[j][i]=a[t++];
        }
    }
    for (i = 0; i < m; i++)
    {
        for( j=0 ; j < n ; j++)
        {
            cout << b[i][j];
            if(j!=n-1) cout << " ";
        }
        cout << endl;
    }
    
    
}
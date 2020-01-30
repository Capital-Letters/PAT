#include<bits/stdc++.h>
using namespace std;
int cmp(const void *a,const void *b)
{
    return *(int *)b - *(int *)a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
    int ans=0,p=1;
    while (ans<=n&&a[p-1]>p)
    {
        ans++;
        p++;
    }
    cout << ans;
    
}
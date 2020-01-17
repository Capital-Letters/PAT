#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    int B[n];
    int V[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        B[i]=A[i];
    }
    qsort(B,n,sizeof(B[0]),cmp);
    int max=0,count=0;
    for (int i = 0; i < n; i++)
    {
        if(A[i]==B[i]&&A[i]>max)
        {
            V[count++]=A[i];
        }
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        if(i!=0) cout << " ";
        cout << V[i];
    }
    cout << endl;
    
    
    
}
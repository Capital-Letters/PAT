#include<bits/stdc++.h>
using namespace std;
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    int n,p;
    cin >> n >> p;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    qsort(A,n,sizeof(A[0]),cmp);
    int max=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+max; j < n; j++)
        {
            if (A[i]*p>=A[j])
            {
                if (j-i+1>max)
                {
                    max=j-i+1;
                }
                
            }
            else
            {
                break;
            }
        }
        
    }
    cout << max;
    
    
}
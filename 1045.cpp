#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max=0;
    int min=1000000000;
    int count=0;
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        int flag=1;
        for (int j = 0 , k=n-1 ; j<i||k>i; )
        {
            if(j>i&&A[j]>A[i])
            {
                flag=0;
                break;
            }
            if(k<i&&A[k]<A[i])
            {
                flag=0;
                break;
            }
            j++;
            k--;
        }
        if(flag)
        {
            count++;
            cout << A[i];
        }
    }
    
    
}
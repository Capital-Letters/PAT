#include<iostream>
using namespace std;
// void swap(int &a , int &b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// void reverse(int low,int high,int A[])
// {
//     for (int i = low , j= high; low<high; i++,j--)
//     {
//         swap(A[low],A[high]);
//     }
    
// }

int main()
{
    int n;
    int m;
    scanf("%d%d",&n,&m);
    if (m>=n)
    {
        m%=n;
    }
    int A[n];
    for (int i = 0; i <n; i++)
    {
        cin >> A[i];
    }
    for (int i = n-m; i < n; i++)
    {
        cout << A[i] << " ";
    }
    for (int i = 0; i < n-m; i++)
    {
        if (i==n-m-1)
        {
            cout << A[i];
        }
        else
        {
            cout << A[i] << " ";
        }
        
    }
    
    // reverse(0,m-1,A);
    // reverse(m,n-1,A);
    // reverse(0,n-1,A);
    // for (int i = 0; i < n; i++)
    // {
    //     if (i==n-1)
    //     {
    //         cout << A[i];
    //     }
    //     else
    //     {
    //         cout << A[i] << " ";
    //     }       
    // }
    
}
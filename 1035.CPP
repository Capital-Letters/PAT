#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

bool equal(int a[],int b[],int N)
{
    for (int k = 0; k < N; k++)
    {
        if (a[k]!=b[k])
        {
            return false;
        }
        
    }
    return true;
    
}
void merge(int a[],int b[],int N)
{
    int edge=1;
    for ( ; ; edge*=2)
    {
        bool istrue = true;
        istrue=equal(a,b,N);
        for (int j= 0; j < N; j+=edge)
        {
            int temp=j+edge;
            if (temp>N)
            {
                temp=N;
            }
            sort(a+j,a+temp);
        }
        if (istrue)
        {
            cout << "Merge Sort"<< endl;
            break;
        }
    }
}
int main()
{
    int N;
    cin >> N;
    int A1[N+5] , A2[N+5];
    for (int i = 0; i < N; i++)
    {
        cin >> A1[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> A2[i];
    }
    int i,j;
    for ( i = 0; A2[i]<=A2[i+1]&&i<N-1; i++);
    for ( j =++i;A1[j]==A2[j]&&j<N;j++);
    if (j==N)
    {
        cout << "Insertion Sort" << endl;
        sort(A1,A1+i+1);
    }
    else
    {
        merge(A1,A2,N);
    }
    for (int k = 0; k < N; k++)
    {
        if (k!=0)
        {
            cout << " ";
        }
        cout << A1[k];
    }
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int A[101];
    for (int i = 0; i < 101; i++)
    {
        A[i]=0;
    }
    
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int temp;
        cin >> temp;
        A[temp]++;
    }
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int temp;
        cin >> temp;
        if (i!=0)
        {
            cout << " ";
        }
        cout << A[temp];
    }
    
    
}
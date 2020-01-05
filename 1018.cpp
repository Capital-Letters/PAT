#include <cstdio>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int compare(char c1, char c2)
{
    if (c1==c2)
    {
        return 0;
    }
    else if (c1=='C'&&c2=='J')
    {
        return 1;
    }
    else if (c1=='J'&&c2=='B')
    {
        return 1;
    }
    else if (c1=='B'&&c2=='C')
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
    
}

int main()
{
    int n;
    int countC=0;
    int countJ=0;
    int countB=0;

    int count_C=0;
    int count_J=0;
    int count_B=0;
    cin >> n;
    int count1=0,count2=0,count3=0;
    for (int i = 0; i < n; i++)
    {
        char c1,c2;
        cin >> c1 >> c2;
        switch (compare(c1,c2))
        {
        case 0:
            count2++;
            break;
        case 1:
            count1++;
            if (c1=='C')
            {
                countC++;
            }
            else if (c1=='J')
            {
                countJ++;
            }
            else
            {
                countB++;
            }
            break;
        case -1:
            count3++;
            if (c2=='C')
            {
                count_C++;
            }
            else if (c2=='J')
            {
                count_J++;
            }
            else
            {
                count_B++;
            }
        default:
            break;
        }
        
    }
    cout << count1 << " " << count2 << " " << count3 << endl;
    cout << count3 << " " << count2 << " " << count1 << endl;
    int a = max(max(countB,countC),countJ);
    if (a==countB)
    {
        cout << 'B' << ' ';
    }
    else if (a==countC)
    {
        cout << 'C' << ' ';
    }
    else
    {
        cout << 'J' << ' ';
    }
    a = max(max(count_B,count_C),count_J);
    if (a==count_B)
    {
        cout << 'B';
    }
    else if (a==count_C)
    {
        cout << 'C';
    }
    else
    {
        cout << 'J';
    }
}
#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x=0;
    int count[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> count[i];
    }
    string s="";
    for (int i = 1; i < 10; i++)
    {
        if (count[i]>0)
        {
            s+=to_string(i);
            count[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        while (count[i]!=0)
        {
            s+=to_string(i);
            count[i]--;
        }
    }
    cout << s;
}
#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    long long int A,B;
    int D;
    cin >> A >> B >> D;
    long long int C;
    C=A+B;
    if(C==0) 
    {
        cout << 0;
        return 0;
    }
    while (C>0)
    {
        s.push(C%D);
        C/=D;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
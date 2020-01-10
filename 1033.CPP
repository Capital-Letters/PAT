#include<bits/stdc++.h>
#include <stdio.h>
#include<string>
using namespace std;
int main()
{
    char bad_key[100001];
    char s1[100001];
    char c=getchar();
    int a=0,b=0;
    int i,j;
    if (c=='\n')
    {
        
    }
    else
    {
        while (c!='\n')
        {
            bad_key[a++]=c;
            c=getchar();
        }
    }
    c=getchar();
    while (c!='\n')
    {
        s1[b++]=c;
        c=getchar();
    }
    if (a==0)
    {
        for (i = 0; i < b; i++)
        {
            cout << s1[i];
        }
        return 0;
    }
    for ( i = 0; i < b; i++)
    {
        for ( j = 0; j < a ; j++)
        {
            if (s1[i]==bad_key[j]||('a'<s1[i]&&s1[i]<'z'&&(s1[i]-32)==bad_key[j])||('A'<=s1[i]&&s1[i]<='Z'&&bad_key[j]=='+'))
            {
                break;
            }
            
        }
        if (j>=a)
        {
            cout << s1[i];
        }
        
    }
}
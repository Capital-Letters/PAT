#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char password[10000];
    char s[10000];
    int n,cnt=0;
    scanf("%s %d",password,&n);
    getchar();
    while(1)
    {
        gets(s);
        if(s[0]=='#'&&strlen(s)==1) break;
        cnt++;
        if(cnt<=n&&!strcmp(password,s))
        {
            cout <<"Welcome in";
            break;
        }
        else if(cnt<=n&&strcmp(password,s))
        {
            cout << "Wrong password: " << endl;
            if(cnt==n)
            {
                cout << "Account locked";
                break;
            }
        }
    }
}
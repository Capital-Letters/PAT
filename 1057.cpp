#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c=getchar();
    int order;
    int sum=0;
    while (c!='\n')
    {
        if('a'<=c&&c<='z')
        {
            order=c-'a'+1;
            sum+=order;
        }
        if('A'<=c&&c<='Z') 
        {
            order=c-'A'+1; 
            sum+=order;
        }
        c=getchar();
    }
    int ling=0,yi=0;
    while (sum)
    {
        if(sum%2==0) ling++;
        else yi++;
        sum/=2;
    }
    cout << ling << " " << yi;
}
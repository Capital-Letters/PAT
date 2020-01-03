#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string word[100];
    int i=0;
    char c=getchar();
    while (c!='\n')
    {
        int j=0;
        while (c!=' ')
        {
            word[i][j++]=c;
            c=getchar();
            if (c=='\n')
            {
                break;
            }
            
        }
        i++;
    }
    for (int k = i-1; i >=0; k--)
    {
        if (i==0)
        {
            cout << word[k];
        }
        else
        {
            cout << word[k] << ' ';
        }
        
    }
    
}
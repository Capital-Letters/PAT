#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    string B;
    cin >> A >> B;
    char C[13];
    C[0]='0';
    C[1]='1';
    C[2]='2';
    C[3]='3';
    C[4]='4';
    C[5]='5';
    C[6]='6';
    C[7]='7';
    C[8]='8';
    C[9]='9';
    C[10]='J';
    C[11]='Q';
    C[12]='K';
    int count=1;
    char s='0';
    while (A.size()!=B.size())
    {
        B=s+B;
    }
    cout << B;
    for (int i = A.size(); i<B.size(); i++)
    {
        if(count%2==0)
        {
            cout << C[((A[i]-'0')+(B[i]-'0'))%13];
        }
        else
        {
            int temp=(B[i]-'0')-(A[i]-'0');
            if(temp<0)
            {
                temp+=10;
            }
            cout << temp;
        }

        count++;
    }
    
}
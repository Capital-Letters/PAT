#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue <char> P;
    queue <char> A;
    queue <char> T;
    queue <char> e;
    queue <char> s;
    queue <char> t;
    char c = getchar();
    while (c!='\n')
    {
        switch (c)
        {
        case 'P':
            P.push(c);
            c=getchar();
            break;
        case 'A':
            A.push(c);
            c=getchar();
            break;
            
        case 'T':
            T.push(c);
            c=getchar();
            break;
        case 'e':
            e.push(c);
            c=getchar();
            break;
        case 's':
            s.push(c);
            c=getchar();
            break;
        case 't':
            t.push(c);
            c=getchar();
            break;
        default:
            c=getchar();
            break;
        }
    }
    while ((!P.empty())||(!A.empty())||(!T.empty())||(!e.empty())||(!s.empty())||(!t.empty()))
    {
        if((!P.empty()))
        {
            cout << P.front();
            P.pop();
        }
        if((!A.empty()))
        {
            cout << A.front();
            A.pop();
        }
        if((!T.empty()))
        {
            cout << T.front();
            T.pop();
        }
        if((!e.empty()))
        {
            cout << e.front();
            e.pop();
        }
        if((!s.empty()))
        {
            cout << s.front();
            s.pop();
        }
        if((!t.empty()))
        {
            cout << t.front();
            t.pop();
        }
    }
    
}
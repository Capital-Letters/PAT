#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <string> st;
    int n;
    string s;
    cin >> n >> s;
    int temp=3;
    n-=1;
    int row=1;
    while (n>=(2*temp))
    {
        n-=(2*temp);
        temp+=2;
        row++;
    }
    for (int i = 0; i < row; i++)
    {
        string space="";
        for (int j = 0; j < i; j++)
        {
            space+=" ";
        }
        string sign="";
        temp-=2;
        for (int j = 0; j < temp; j++)
        {
            sign+=s;
        }
        st.push(space+sign+space);
        cout<< space << sign << space << endl;
    }
    st.pop();
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << n;
}
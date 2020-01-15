#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count =0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='P')
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]=='A')
                {
                    for (int k = j+1; k < s.size(); k++)
                    {
                        if(s[k]=='T')
                        {
                            count++;
                        }
                    }
                    
                }
            }
        }
    }
    count%=1000000007;
    cout << count;
    
}
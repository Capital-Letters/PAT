#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int j=0;
    string bad_key="";
    for (int i = 0; i < s1.size();i++)
    {
        if (s1[i]!=s2[j])
        {
            if (islower(s1[i]))
            {
                s1[i]-=32;
            }
            int flag=0;
            for (int k = 0; k<bad_key.size(); k++)
            {
                if (s1[i]==bad_key[k])
                {
                    flag=1;
                    break;
                }
                
            }
            if (!flag)
            {
                bad_key+=s1[i];
            }
            
        }
        else
        {
            j++;
        }
        
    }
    cout << bad_key;
    
}
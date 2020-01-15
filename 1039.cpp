#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    int count1=0;
    int count2=0;
    
    cin >> s1 >> s2;
    for (int i = 0; i < s2.size(); i++)
    {
        int j;
        int flag=0;
        for( j=0;j<s1.size();j++)
        {
            if (s2[i]==s1[j])
            {
                flag=1;
                count1++;
                s1.erase(j,1);
                break;
            }
            
        }
        if (!flag&&j>=s1.size())
        {
            count2++;
        }
        
    }
    if(count1==s2.size())
    {
        cout << "Yes" << " "  << s1.size();

    }
    else
    {
        cout << "No" << " " << count2;
    }
     
}
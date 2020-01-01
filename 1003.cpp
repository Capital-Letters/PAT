#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        str[i]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        int count_P=0,count_A=0,count_T=0;
        int pos_P=0,pos_T=0;
        for(int j = 0; j< str[i].size();j++)
        {
            if (str[i][j]=='P')
            {
                pos_P=j;
                count_P++;
            }
            if (str[i][j]=='A')
            {
                count_A++;
            }
            if(str[i][j]=='T')
            {
                pos_T=j;
                count_T++;
            }
        }
        if (count_P+count_A+count_T!=str[i].size()||count_P!=1||count_T!=1||pos_T-pos_P<=1||(pos_T-pos_P-1)*pos_P!=(str[i].size()-pos_T-1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    
}
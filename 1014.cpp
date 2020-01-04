#include<cstdio>
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<char,string> m;
    m['a']="MON";
    m['b']="TUE";
    m['c']="WED";
    m['d']="THU";
    m['e']="FRI";
    m['f']="SAT";
    m['g']="SUN";
    m['A']="MON";
    m['B']="TUE";
    m['C']="WED";
    m['D']="THU";
    m['E']="FRI";
    m['F']="SAT";
    m['G']="SUN";
    map<char,int> hour;
    hour['0']=0;
    hour['1']=1;
    hour['2']=2;
    hour['3']=3;
    hour['4']=4;
    hour['5']=5;
    hour['6']=6;
    hour['7']=7;
    hour['8']=8;
    hour['9']=9;
    hour['A']=10;
    hour['B']=11;
    hour['C']=12;
    hour['D']=13;
    hour['E']=14;
    hour['F']=15;
    hour['G']=16;
    hour['H']=17;
    hour['I']=18;
    hour['G']=19;
    hour['K']=20;
    hour['L']=21;
    hour['M']=22;
    hour['N']=23;
    string str[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> str[i];
    }
    int length1;
    int count1=1;
    if (str[0].size()>str[1].size())
    {
        length1=str[1].size();
    }
    else
    {
        length1=str[0].size();
    }
    for (int i = 0; i < length1; i++)
    {
        if (str[0][i]==str[1][i])
        {
            if (str[0][i]>='A'&&str[0][i]<='z'||(str[0][i]>='0'&&str[0][i]<='9'))
            {
                if (count1==1&&str[0][i]>='A'&&str[0][i]<='z')
                {
                    cout << m[str[0][i]] << " ";
                    count1=2;
                    continue;
                }
                if (count1==2)
                {
                    cout << hour[str[0][i]]<<":";
                    break;
                }
                
                
            }
        }
        
    }
    int length2;
    if (str[2].size()<str[3].size())
    {
        length2=str[2].size();
    }
    else
    {
        length2=str[3].size();
    }
    for (int i = 0; i < length2; i++)
    {
        if (str[2][i]>='A'&&str[2][i]<='z')
        {
            if (str[2][i]==str[3][i])
            {
                if (i<10)
                {
                    cout << "0";
                }
                cout << i;
                break;
            }
        }
        
    }
}
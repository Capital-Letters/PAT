#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(string &s)
{
    int pos_dot=s.find(".");
    char temp=s[pos_dot];
    s[pos_dot]=s[pos_dot+1];
    s[pos_dot+1]=temp;
}
int main()
{

    string n;
    cin >> n;
    int posE=n.find('E');
    posE+=2;
    int flag_s;
    if (n[posE-1]=='-')
    {
        flag_s=0;
    }
    else
    {
        flag_s=1;
    }
    string last=n.substr(posE);
    int zhishu=stoi(last,0,10);
    string youxiaoshuzi=n.substr(1,posE-3);
    if (zhishu==0)
    {
        cout<< '0';
        return 0;
    }
    
    if (!flag_s)
    {
        string ling="";
        for (int i = 0; i <zhishu-1; i++)
        {
            ling+='0';
        }
        if (n[0]=='+')
        {
            cout << "0.";
        }
        else
        {
            cout << "-0.";
        }
        cout << ling << youxiaoshuzi.replace(youxiaoshuzi.find("."),1,"");
    }
    else
    {
        int yidongweishu_dot_max = youxiaoshuzi.size()-2;
        if (zhishu<yidongweishu_dot_max)
        {
            for (int i = 0; i < zhishu; i++)
            {
                swap(youxiaoshuzi);
            }
            
        }
        else
        {
            if (n[0]=='-')
            {
                cout << n[0];
            }
            
            youxiaoshuzi.replace(youxiaoshuzi.find("."),1,"");
            cout << youxiaoshuzi;
            for (int i = 0; i < zhishu-yidongweishu_dot_max; i++)
            {
                cout << "0";
            }
            
        }
        
        
    }
    
    
    
}
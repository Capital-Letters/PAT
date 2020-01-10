#include<bits/stdc++.h>
#include<string>
#include<cstdio>
#include<iostream>
using namespace std;
int add(int fenzi1,int fenmu1,int fenzi2,int fenmu2)
{
    if (fenmu1!=fenmu2)
    {
        fenzi1*=fenmu2;
        fenzi2*=fenmu1;
        int temp=fenzi1;
        fenmu1*=fenmu2;
        fenmu2*=temp;
    }
    int result_fenzi=fenzi1+fenzi2;
    
}
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int pos1=s1.find('/');
    int pos2=s2.find('/');
    string fenzi1 = s1.substr(0,pos1);
    string fenmu1 = s1.substr(pos1+1);
    string fenzi2 = s2.substr(0,pos2);
    string fenmu2 = s2.substr(pos2+1);
    int fenzi1_int=stoi(fenzi1,0,10);
    int fenmu1_int=stoi(fenmu1,0,10);
    int fenzi2_int=stoi(fenzi2,0,10);
    int fenmu2_int=stoi(fenmu2,0,10);
    int zhengshu1=fenzi1_int/fenmu1_int;
    int zhengshu2=fenzi2_int/fenmu2_int;
    
}
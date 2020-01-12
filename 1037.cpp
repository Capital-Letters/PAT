#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string p;
    string a;
    cin >> p >> a;
    int g1 , s1 , k1;
    int g2 , s2 , k2;
    int pos_1_1=p.find('.');
    int pos_1_2=p.rfind('.');
    int pos_2_1=a.find('.');
    int pos_2_2=a.rfind('.');
    g1=stoi(p.substr(0,pos_1_1),0,10);
    s1=stoi(p.substr(pos_1_1+1,pos_1_2-pos_1_1-1),0,10);
    k1=stoi(p.substr(pos_1_2+1),0,10);

    g2=stoi(a.substr(0,pos_2_1),0,10);
    s2=stoi(a.substr(pos_2_1+1,pos_2_2-pos_2_1-1),0,10);
    k2=stoi(a.substr(pos_2_2+1),0,10);
    int total2=k2+29*s2+17*29*g2;
    int total1=k1+29*s1+17*29*g1;
    int result=total2-total1;
    if (result<0)
    {
        cout << "-";
        result=-result;
    }
    int result_g=result/(29*17);
    result%=(29*17);
    int result_s=result/17;
    result%=17;
    int result_k=result;
    
    cout << result_g << "." << result_s << "." << result_k ;
    
}
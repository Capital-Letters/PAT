#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int baiwei;
    int shiwei;
    int gewei;
    baiwei=n/100;
    shiwei=(n%100)/10;
    gewei=(n%10);
    for (int i = 0; i < baiwei; i++)
    {
        cout << "B";
    }
    for (int i = 0; i < shiwei; i++)
    {
        cout << "S";
    }
    for (int i = 1; i <=gewei; i++)
    {
        cout << i;
    }
    
    
}
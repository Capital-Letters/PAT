#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    struct data
    {
        long long int A,B,C;
    };
    data d[n];
    for (int i = 0; i < n; i++)
    {
        cin>>d[i].A>>d[i].B>>d[i].C;
    }
    for (int i = 0; i < n; i++)
    {
        if (d[i].A+d[i].B>d[i].C)
        {
            cout<<"Case #"<<i+1<<": true"<<endl;
        }
        else
        {
            cout<<"Case #"<<i+1<<": false"<<endl;
        }
    }
    
    
}
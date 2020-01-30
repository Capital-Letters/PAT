#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum=0;
    string temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                string newc=temp[i]+temp[j];
                int c=stoi(newc,0,10);
                sum+=c;
            }
        }
    }
    cout << sum;
}
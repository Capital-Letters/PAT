#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    float n ;
    char c;
    cin >> n >> c;
    for (int i = 0; i < round(n/2)-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0)
            {
                cout << c;
            }
            else
            {
                if (j==0||j==n-1)
                {
                    cout << c;
                }
                else
                {
                    cout << " ";
                }
                
            }
            
            
        }
        cout << endl;

        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
    
    
}
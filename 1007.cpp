#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int temp1;
    int temp2=2;
    int count=0;
    int n;
    cin >> n;
    for (int i = 3; i < n; i++)
    {   
        int flag=1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag)
        {   
            temp1=temp2;
            temp2=i;
            int dn=temp2-temp1;
            if (dn==2)
            {
                count++;
            }
            
        }
    }
    cout << count;
}
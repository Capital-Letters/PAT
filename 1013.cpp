#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n;
    int s=1;
    cin >> m >> n;
    int count=1;
    int count1=0;
    for (int i = 3; count <= n; i++)
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
            count++;
            if (count<=n&&count>=m)
            {
                count1++;
                if (count1==10)
                {
                    count1=0;
                    cout << i << endl;
                }
                else
                {
                    if(count==n)
                    {
                        cout << i;
                    }
                    else
                    {
                        if (s==1&&m==1)
                        {
                            cout << 2 <<" ";
                            s=0;
                            cout << i << " ";
                            count1++;
                        }
                        else
                        {
                            cout << i << " ";
                        }
                        
                        
                    }
                    
                }   
            }
        }
    } 
}
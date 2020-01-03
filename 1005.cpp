#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (input[i]>input[max])
        {
            max=i;
        }
        
    }
    int flag[input[max]+1];
    for (int i = 0; i < input[max]+1; i++)
    {
        flag[i]=0;
    }
    for (int i = n-1; i >= 0; i--)
    {
        int temp=input[i];
        while (temp!=1)
        {
            if(temp%2==0)
            {
                temp/=2;
                if (temp<=input[max])
                {
                    flag[temp]=1;
                }
            }
            else
            {
                temp=(3*temp+1)/2;
                if (temp<=input[max])
                {
                    flag[temp]=1;
                }
            }
            
        }
        
    }
    int output[n];
    int k=0;
    for (int i = 1; i < input[max]+1; i++)
    {
        if (!flag[i])
        {
            for (int j = 0; j < n; j++)
            {
                if (i==input[j])
                {
                    output[k++]=i;
                }
                
            }
            
        }
        
    }
    for (int i=k-1; i >=0; i--)
    {
        if (i==0)
        {
            cout << output[i];
        }
        else
        {
            cout << output[i] << " ";
        }
    }
}
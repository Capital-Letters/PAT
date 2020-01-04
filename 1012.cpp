#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int A[n];
    int sum1=0;
    int count1=0;
    int sum2=0;
    int s=1;
    int count2=0;
    int count3=0;
    double sum4=0;
    double ave=0.0;
    int count4=0;
    int max5=0;
    int count5=0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i]%10==0)
        {
            sum1+=A[i];
            count1++;
        }
        if (A[i]%5==1)
        {
            sum2+=s*A[i];
            s=-s;
            count2++;
        }
        if (A[i]%5==2)
        {
            count3++;
        }
        if (A[i]%5==3)
        {
            sum4+=A[i];
            count4++;

        }
        if (A[i]%5==4)
        {
            count5++;
            if (A[i]>max5)
            {
                max5=A[i];
            }
            
        }
        
    }
    if (count1==0)
    {
        cout <<"N ";
    }
    else
    {
        cout << sum1 << " ";
    }
    if (count2==0)
    {
        cout << "N ";
    }
    else
    {
        cout << sum2 << " ";
    }
    if (count3==0)
    {
        cout << "N ";
    }
    else
    {
        cout << count3 << " ";
    }
    if (count4==0)
    {
        cout << "N ";
    }
    else
    {   
        ave=sum4/count4;
        printf("%.1f ",ave);
    }
    if (count5==0)
    {
        cout << 'N';
    }
    else
    {
        cout << max5;
    }
    
    
}
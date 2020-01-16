#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[4];
    int count1=0,count2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> A[j];
        }
        int flag1=0;
        int flag2=0;
        if(A[0]+A[2]==A[1])
        {
            flag1=1;
        } 
        if(A[0]+A[2]==A[3]) 
        {
            flag2=1;
        }
        if(flag1&&!flag2) 
        {
            count2++;
        }
        if(!flag1&&flag2)
        {
            count1++;
        }
    }
    cout << count1 << " " << count2;
}
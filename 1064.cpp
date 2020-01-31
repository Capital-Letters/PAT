#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int math[37];
    int sum;
    for(int i=0;i<37;i++)
    {
        math[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        int temp;
        cin >> temp;
        while (temp>0)
        {
            sum+=(temp%10);
            temp/=10;
        }
        math[sum]++;
    }
    int count=0;
    for(int i=0;i<37;i++)
    {
        if(math[i]!=0)
        {
            count++;
        }
    }
    cout << count << endl;
    for(int i=0,flag=0;i<37;i++)
    {
        if(math[i]!=0)
        {
            if(flag==1) cout<< " ";
            flag=1;
            cout<<i;
        }
    }
    
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int weight[17];
    weight[0]=7;
    weight[1]=9;
    weight[2]=10;
    weight[3]=5;
    weight[4]=8;
    weight[5]=4;
    weight[6]=2;
    weight[7]=1;
    weight[8]=6;
    weight[9]=3;
    weight[10]=7;
    weight[11]=9;
    weight[12]=10;
    weight[13]=5;
    weight[14]=8;
    weight[15]=4;
    weight[16]=2;
    char z[11];
    z[0] = '1';
    z[1] = '0';
    z[2] = 'X';
    z[3] = '9';
    z[4] = '8';
    z[5] = '7';
    z[6] = '6';
    z[7] = '5';
    z[8] = '4';
    z[9] = '3';
    z[10] = '2';
    int n;
    int count=0;
    cin >> n;
    string id[n];
    for (int i = 0; i < n; i++)
    {
        cin >> id[i];
    }
    string out[n];
    int k=0;
    for (int i = 0; i < n; i++)
    {
        string jiaoyanma=id[i].substr(0,17);
        int sum=0;
        for (int j = 0; j < 17; j++)
        {
            sum+=(jiaoyanma[i]-'0')*weight[i];
        }
        sum%=11;
        if (z[sum]==id[i][17])
        {
            
            count++;
        }
        else
        {
            out[k++]=id[i];
        }
        
    }
    if (count==n)
    {
        cout << "All passed";
    }
    else
    {
        for (int i = 0; i < k-1; i++)
        {
            cout << out[i] << endl;
        }
        cout << out[k-1];
    }
    
    
    
}
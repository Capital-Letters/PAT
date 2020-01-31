#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,A,B,G;
    cin >> M >> N >> A >> B >> G;
    int pic[M][N];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> pic[i][j];
            if(A<=pic[i][j]&&pic[i][j]<=B) pic[i][j]=G;
        }
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(j!=0) cout << " ";
            printf("%03d",pic[i][j]); 
        }
        if(i!=M-1) cout << endl;
    }
}
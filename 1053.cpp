#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    double e;
    int D;
    cin >> N >> e >> D;
    int kongzhi1=0,kongzhi2=0;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        int count=0;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin >> temp;
            if(temp<e)
            {
                count++;
            }
        }
        if(count>n/2&&count<D)
    }
    
}
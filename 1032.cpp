#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n]={0};
    for (int i = 0; i < n; i++)
    {
        int id,score;
        cin >> id >> score;
        A[id]+=score;
    }
    int max=1;
    for (int i = 1; i < n; i++)
    {
        if (A[i]>A[max])
        {
            max=i;
        }
    }
    cout << max  << " " << A[max];
}
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double c1,c2;
    cin >> c1 >> c2;
    int total_time=round((c2-c1)/100);
    int hour=total_time/3600;
    total_time%=3600;
    int minute=total_time/60;
    total_time%=60;
    int second=total_time;
    printf("%02d:%02d:%02d",hour,minute,second);
}
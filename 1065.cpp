#include<bits/stdc++.h>
using namespace std;
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}

int main()
{
    int n,m;
    cin >> n;
    int a,b;
    int couple[100000]={-1};
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        couple[a]=b;
        couple[b]=a;
    }
    cin >> m;
    int guest[m],dog[m];
    int isExist[100000]={0};
    for(int i=0;i<m;i++)
    {
        cin >> guest[i];
        if(couple[guest[i]]!=-1)
        {
            isExist[couple[guest[i]]]=1;
        }
    }
    int num=0;
    for(int i=0;i<m;i++)
    {
        if(!isExist[guest[i]])
        {
            dog[num++]=guest[i];
        }
    }
    qsort(dog,num,sizeof(dog[0]),cmp);
    cout << num << endl;
    for(int i=0;i<num;i++)
    {
        if(i!=0) cout << " ";
        printf("%05d",dog[i]);
    }
}

#include <cstdio>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void reverse(int a[],int low , int high)
{
    for(int i=low,j=high;i<j;i++,j--)
    {
        swap(a[i],a[j]);
    }
}
int main()
{
    int first,k,n,temp;
    scanf("%d %d %d",&first,&n,&k);
    int data[100005],next[100005],list[100005];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        scanf("%d %d",&data[temp],&next[temp]);
    }
    int sum=0;
    while (first!=-1)
    {
        list[sum++]=first;
        first=next[first];
    }
    for(int i=0;i<(sum-sum%k);i+=k)
    {
        reverse(list,i,i+k-1);
    }
    for (int i = 0; i < sum-1; i++)
    {
        printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
    }
    printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
}
// struct linklist
// {
//     int data;
//     string address;
//     string next;
// };
// void swap(linklist &l1,linklist &l2)
// {
//     linklist temp=l1;
//     l1=l2;
//     l2=temp;
// }
// void reverse(linklist ls[],int low , int high)
// {
//     for (int i = low, j=high ; i < j; i++,j--)
//     {
//         swap(ls[i],ls[j]);
//     }
    
// }
// int main()
// {
//     string address_first;
//     int N , k; 
//     cin >> address_first;
//     cin >> N >> k;
//     linklist ls[N];
//     ls[0].address=address_first;
//     linklist ls_temp[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> ls_temp[i].address >> ls_temp[i].data >> ls_temp[i].next;
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (ls_temp[i].address==address_first)
//         {
//             ls[0].data=ls_temp[i].data;
//             ls[0].next=ls_temp[i].next;
//         }
//     }
//     int cur=0;
//     for (int i = 0; i < N-1; i++)
//     {
//         for (int i = 0; i < N; i++)
//         {
//             if (ls[cur].next==ls_temp[i].address)
//             {
//                 ls[++cur]=ls_temp[i];
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i<N; i+=k)
//     {
//         if (i+k-1<=N-1)
//         {
//             reverse(ls,i,i+k-1);
//         }
//     }
//     for (int i = 0; i < N-1; i++)
//     {
//         ls[i].next=ls[i+1].address;
//     }
//     ls[N-1].next="-1";
//     for (int i = 0; i < N-1; i++)
//     {
//         cout << ls[i].address << " " << ls[i].data << " " << ls[i].next << endl;
//     }
//     cout << ls[N-1].address << " " << ls[N-1].data << " " << ls[N-1].next;
// }
#include<cstdio>
#include<iostream>
using namespace std;
struct student
    {
        int id;
        int de;
        int cai;
    };
void swap(student &st1,student &st2)
{
    int temp1;
    int temp2;
    int temp3;

    temp1=st1.id;
    st1.id=st2.id;
    st2.id=temp1;

    temp2=st1.de;
    st1.de=st2.de;
    st2.de=temp2;

    temp3=st1.cai;
    st1.cai=st2.cai;
    st2.cai=temp3;
}
void sort_score(student st[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = n-1; j >i; j++)
        {
            if (st[j].de+st[j].cai>st[j-1].de+st[j-1].cai)
            {
                swap(st[j],st[j-1]);
                flag=1;
            }
        }
        if (!flag)
        {
            return;
        }
    }
}
void sort_id(student st[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = n-1; j > i; j--)
        {
            if (st[j].id<st[j-1].id)
            {
                swap(st[j],st[j-1]);
                flag=1;
            }
            
        }
        if (!flag)
        {
            return;
        }
        
    }
}

void sort_de(student st[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = n-1; j > i; j--)
        {
            if (st[j].de>st[j-1].de)
            {
                swap(st[j],st[j-1]);
                flag=1;
            }
            
        }
        if (!flag)
        {
            return;
        }
        
    }
}
int main()
{   
    int n,L,H;
    cin>>n>>L>>H;
    student st[n];
    int kind1=0;
    int kind2=0;
    int kind3=0;
    student *st1;
    student *st2;
    student *st3;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&st[i].id,&st[i].de,&st[i].cai);
        if (st[i].de>=H&&st[i].cai>=H)
        {
            st1[kind1++].id=st[i].id;
            st1[kind1++].de=st[i].de;
            st1[kind1++].cai=st[i].cai;
        }
        if (st[i].de>=H&&st[i].cai>=L&&st[i].cai<H)
        {
            st2[kind2++].id=st[i].id;
            st2[kind2++].de=st[i].de;
            st2[kind2++].cai=st[i].cai;
        }
        if (L<=st[i].de&&st[i].de<H&&L<=st[i].cai&&st[i].cai<H)
        {
            st3[kind3++].id=st[i].id;
            st3[kind3++].de=st[i].de;
            st3[kind3++].cai=st[i].cai;
        }
    }
    cout << kind1 << kind2 << kind3;
    sort_id(st1,kind1);
    sort_id(st2,kind2);
    sort_id(st3,kind3);

    sort_de(st1,kind1);
    sort_de(st2,kind2);
    sort_de(st3,kind3);

    sort_score(st1,kind1);
    sort_score(st2,kind2);
    sort_score(st3,kind3);
    cout << (kind1+kind2+kind3) << endl;
    for (int i = 0; i < kind1; i++)
    {
        cout << st1[i].id << " " << st1[i].de << " " << st1[i].cai << endl;
    }
    for (int i = 0; i < kind2; i++)
    {
        cout << st2[i].id << " " << st2[i].de << " " << st2[i].cai << endl;
    }
    for (int i = 0; i < kind3-1; i++)
    {
        cout << st3[i].id << " " << st3[i].de << " " << st3[i].cai << endl;
    }
    cout << st3[kind3-1].id << " " << st3[kind3-1].de << " " << st3[kind3-1].cai ;
}
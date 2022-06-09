#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int size,a[100000],i=0,query,j,m,sum,count,size1,l,r,x;
    cin>>size;

    for(i=1;i<=size;i++)
    {
        cin>>a[i];
    }
    cin>>query;
    long long int q[query][3];
    cin>>m;

    for(i=0;i<query;i++)
    {
       cin>>q[i][0];
       cin>>q[i][1];
       cin>>q[i][2];
    }

    long long int answer[query];

    for(i=0;i<query;i++)
    {
        sum=0,count=0;
       l= q[i][0],r=q[i][1],x=q[i][2];

       for(j=l;j<=r;j++)
       {
           if(a[j]==0)
           {
               count++;
           }
           sum+=a[j];
       }
        sum=sum+count*x;

        answer[i]=sum;
    }

    size1=sizeof(answer)/sizeof(answer[0]);
    for(i=0;i<size1;i++)
    cout<<answer[i]<<endl;
    return 0;

}
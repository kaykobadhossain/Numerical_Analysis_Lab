#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n=3;
    float A[20][20],c,x[10],sum=0.0;

    cout<<"\The elements of augmented matrix row-wise: "<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            cout<<"A"<<"["<<i<<"]"<<"["<<j<<"]"<<" : ";
            cin>>A[i][j];
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];

    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }
    cout<<"\nThe solution is: "<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"x"<<"["<<i<<"] = "<<x[i]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n=3;
    float A[20][20],c,a[10],sum=0.0;

    cout<<"\The elements of augmented matrix row-wise: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            float t;
            if(i == 1){
                t = 5;
                A[i][4] = 106.8;
            }
             if(i == 2){
                t = 8;
                A[i][4] = 177.2;
            }
             if(i == 3){
                t = 12;
                A[i][4] = 279.2;
            }

            if(j == 1)
            {
                A[i][j] = t*t;
                cout<<"A["<<i<<"]"<<"["<<j<<"]: "<<A[i][j]<<endl;
            }
            if(j == 2)
            {
                A[i][j] = t;
                cout<<"A["<<i<<"]"<<"["<<j<<"]: "<<A[i][j]<<endl;
            }
            if(j == 3)
            {
                A[i][j] = 1;
                cout<<"A["<<i<<"]"<<"["<<j<<"]: "<<A[i][j]<<endl;
            }
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
    a[n]=A[n][n+1]/A[n][n];

    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*a[j];
        }
        a[i]=(A[i][n+1]-sum)/A[i][i];
    }
    cout<<"\nThe solution is: "<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"a"<<"["<<i<<"] = "<<a[i]<<endl;
    }




    //velocity at t=6s: so the formula is 36a1+6a2+a3:
    float t = 6.0;
    float velocity = 0;
    velocity =t*t*a[1] + t*a[2] +a[3];
    cout<<"\nVelocity at 6s: "<<velocity <<endl;

    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,i,j;
    printf("Enter the size of matrix 1 (mxn)\n");
    scanf("%dx%d",&m,&n);
    printf("Enter the size of matrix 2 (ixj)\n");
    scanf("%dx%d",&i,&j);
    if (i==n)
    {
        float mat1[m][n];
        float mat2[i][j];
        int matline1[10000];
        int matline2[10000];
        int count,a,b=0,c,d;
        printf("Enter the first matrix: (a1 a2...an;)\n");
        int h;
        h=getchar();
        for(count=0;h!=';';count++)
        {
            matline1[count]=h;
            h=getchar();
        }
        c=m-1;
        d=n-1;
        for(a=count-1;a>=0;a--)
        {
            mat1[c][d]=0;
            if(d==0)
            {
                c--;
                d=n-1;
            }
            else
            {
                d--;
            }
            b=0;
        }
        c=m-1;
        d=n-1;
        for(a=count-1;a>=0;a--)
        {
            if (matline1[a]!=32 && matline1[a]!=10)
            {
                if (matline1[a]=='-')
                {
                    mat1[c][d]*=-1;
                }
                else if (matline1[a]=='.')
                {
                    mat1[c][d]*=pow(10,-1*b);
                    b=0;
                }
                else
                {
                    mat1[c][d]+=(matline1[a]-48)*pow(10,b);
                    b+=1;
                }
            }
            else
            {
                if(d==0)
                {
                    c--;
                    d=n-1;
                }
                else
                {
                    d--;
                }
                b=0;
            }
        }

        printf("Enter the second matrix: (a1 a2...an;)\n");
        h=getchar();
        for(count=0;h!=';';count++)
        {
            matline2[count]=h;
            h=getchar();
        }
        c=i-1;
        d=j-1;
        for(a=count-1;a>=0;a--)
        {
            mat2[c][d]=0;
            if(d==0)
            {
                c--;
                d=j-1;
            }
            else
            {
                d--;
            }
            b=0;
        }
        c=i-1;
        d=j-1;
        for(a=count-1;a>=0;a--)
        {
            if (matline2[a]!=32 && matline2[a]!=10)
            {
                if (matline2[a]=='-')
                {
                    mat2[c][d]*=-1;
                }
                else if (matline2[a]=='.')
                {
                    mat2[c][d]*=pow(10,-1*b);
                    b=0;
                }
                else
                {
                    mat2[c][d]+=(matline2[a]-48)*pow(10,b);
                    b+=1;
                }
            }
            else
            {
                if(d==0)
                {
                    c--;
                    d=j-1;
                }
                else
                {
                    d--;
                }
                b=0;
            }
        }
        printf("\n\nMatrix 1:\n");
        for(c=0;c<m;c++)
        {
            for(d=0;d<n;d++)
            {
                if (d==0)
                    printf("\n");
                printf("%9.2f",mat1[c][d]);
                //printf(" %d %d",c,d);
            }
        }

        printf("\n\nMatrix 2:\n");
        for(c=0;c<i;c++)
        {
            for(d=0;d<j;d++)
            {
                if (d==0)
                    printf("\n");
                printf("%9.2f",mat2[c][d]);
                //printf(" %d %d",c,d);
            }
        }

        printf("\n\n\n");
        printf("Matrices created successfully.\n");
        printf("The product of the two matrices is:\n");
        c=d=0;
        float mat3[m][j];
        int p;
        float element;
        count=m*j;

        for(c=0;c<m;c++)
        {
            for(d=0;d<j;d++)
            {
                element=0;
                for(p=0;p<n;p++)
                {
                    element+=mat1[c][p]*mat2[p][d];
                }
                mat3[c][d]=element;
                if (d==0)
                    printf("\n");
                printf("%9.2f",mat3[c][d]);
                //printf(" %d %d",c,d);
            }
        }
        printf("\n\n");
    }
    else
    {
        printf("Invalid matrix sizes.\n");
    }
}
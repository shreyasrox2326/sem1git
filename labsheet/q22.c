#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("Enter the size of the matrix (mxn)\n");
    scanf("%dx%d",&m,&n);
    float mat1[m][n];
    int matline1[10000];
    int count,a,b=0,c,d;
    printf("Enter the matrix: (a1 a2...an;)\n");
    int h;
    h=getchar();
    if (1) //creates mat1
    {
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
        printf("\n\nMatrix:\n");
        for(c=0;c<m;c++)
        {
            for(d=0;d<n;d++)
            {
                if (d==0)
                    printf("\n");
                printf("%9.2f",mat1[c][d]);
            }
        }
    }
    float mat2[n][m];
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            float *pa,*pb;
            pa=&mat1[c][d];
            pb=&mat2[d][c];
            *pb=*pa;
        }
    }

    printf("\n\nTranspose of the matrix:\n");
    for(c=0;c<n;c++)
    {
        for(d=0;d<m;d++)
        {
            if (d==0)
                printf("\n");
            printf("%9.2f",mat2[c][d]);
        }
    }
    printf("\n\n");
}
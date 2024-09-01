#include <stdio.h>
#include <string.h>
char stack[6][50];
#define rows (sizeof(stack)/sizeof(stack[0]))
#define cols (sizeof(stack[0])/sizeof(stack[0][0]))
char popped[cols];

void initialise()
{
    for (int i=0; i<rows; i++)
    {
        stack[i][0]='\0';
    }
    /*char input[rows][cols]={"hello","this","is","shreyas"};
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            stack[i][j]=input[i][j];
            if(input[i][j]=='\0')
                break;
        }
    }*/
}
void display()
{
    int i;
    printf("\n");
    for (i=rows-1;i>=0;i--)
    {
        if(i==rows-1)
            printf("TOP =>  - %s\n",stack[i]);
        else
            printf("\t- %s\n",stack[i]);
    }
    printf("\n");
}
int overflow()
{
    for(int i=0;i<rows;i=i)
    {
        if(stack[i][0]=='\0')
            return 0;
        else
            i++;
    }
    return 1;
}
int underflow()
{
    if (stack[0][0]=='\0')
        return 1;
    return 0;
}
int push(char a[])
{
    if (!overflow())
    {
        int end=0;
        for(int i=0;i<rows;i++)
        {
            if (stack[i][0]=='\0')
            {
                for(int j=0;j<cols;j++)
                {
                    stack[i][j]=a[j];
                    if(a[j]=='\0')
                    {
                        end=1;
                        break;
                    }
                }
            }
            if (end) break;
        }
        return 1;
    }
    else
    {
        printf("\n\tCANNOT PUSH (StackOverflow)\n\n");
        return 0;
    }
    
}
int pop()
{
    if(!underflow())
    {
        int j;
        for(int i=rows-1;i>=0;i--)
        {
            if (stack[i][0]!='\0')
            {
                for(j=0;stack[i][j]!='\0';)
                {
                    popped[j]=stack[i][j];
                    j++;
                }
                popped[j]='\0';
                stack[i][0]='\0';
                break;
            }
        }
        return 1;
    }
    else
    {
        printf("\n\tCANNOT POP (StackUnderflow)\n\n");
        popped[0]='\0';
        return 0;
    }

}
int main()
{
    initialise();
    printf("\n\tEnter the commands in the following format\n\tpush <ent> word/pop/disp/init/ovfl/unfl/esc\n\n");
    char input[cols+5];
    char subs[5];
    int t=1;
    while(t)
    {
        printf("\t>");
        scanf("%s",&input);
        if(!strcmp(input,"push"))
        {
            printf("\t");
            scanf("%s",&input);
            char x[50];
            int i;
            for(i=0;input[i]!='\0';i++)
            {
                x[i]=input[i];
            }
            x[i]='\0';
            push(x);
        }
        else if(!strcmp(input,"pop"))
        {
            if(pop())
            {
                printf("\t%s\n",popped);
            }
        }
        else if(!strcmp(input,"disp"))
            display();
        else if(!strcmp(input,"init"))
            initialise();
        else if(!strcmp(input,"ovfl"))
            printf("\t%d\n",overflow());
        else if(!strcmp(input,"unfl"))
            printf("\t%d\n",underflow());
        else if(!strcmp(input,"esc"))
            t=0;
        else if(!strcmp(input,"popped"))
            printf("\t%s\n",popped);
        else
            printf("\tInvalid command.\n");
    }
}
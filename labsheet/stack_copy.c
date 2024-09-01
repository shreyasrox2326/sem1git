#include <stdio.h>
#include <string.h>
#include "rows.c"
#define cols (3)
#define rows (3)
char popa[cols];
char popb[cols];
char popc[cols];
char stka[rows][cols];
char stkb[rows][cols];
char stkc[rows][cols];
char popped[cols];

void initialise(int stack)
{
	if (stack=='A'||stack=='a')
	{
		for (int i=0; i<rows; i++)
		{
			stka[i][0]='\0';
		}
	}
	else if (stack=='B'||stack=='b')
	{
		for (int i=0; i<rows; i++)
		{
			stkb[i][0]='\0';
		}
	}
	else if (stack=='C'||stack=='c')
	{
		for (int i=0; i<rows; i++)
		{
			stkc[i][0]='\0';
		}
	}
	else
	{
		printf("Invalid Stack.");
	}
}
void display(int stack)
{
    int i;
    printf("\n");
	if (stack=='A'||stack=='a')
	{
		printf("Stack A:\n");
		for (i=rows-1;i>=0;i--)
		{
			if(i==rows-1)
				printf("TOP =>  - %s\n",stka[i]);
			else
				printf("\t- %s\n",stka[i]);
		}
		printf("\n");
	}
	else if (stack=='B'||stack=='b')
	{
		printf("Stack B:\n");
		for (i=rows-1;i>=0;i--)
		{
			if(i==rows-1)
				printf("TOP =>  - %s\n",stkb[i]);
			else
				printf("\t- %s\n",stkb[i]);
		}
		printf("\n");
	}
	else if (stack=='C'||stack=='c')
	{
		printf("Stack C:\n");
		for (i=rows-1;i>=0;i--)
		{
			if(i==rows-1)
				printf("TOP =>  - %s\n",stkc[i]);
			else
				printf("\t- %s\n",stkc[i]);
		}
		printf("\n");
	}
	else
	{
		printf("Invalid Stack.");
	}
}
int overflow(int stack)
{
    if(stack=='a'||stack=='A')
	{
		for(int i=0;i<rows;i=i)
		{
			if(stka[i][0]=='\0')
				return 0;
			else
				i++;
		}
		return 1;
	}
	else if(stack=='b'||stack=='B')
	{
		for(int i=0;i<rows;i=i)
		{
			if(stkb[i][0]=='\0')
				return 0;
			else
				i++;
		}
		return 1;
	}
	else if(stack=='c'||stack=='C')
	{
		for(int i=0;i<rows;i=i)
		{
			if(stkc[i][0]=='\0')
				return 0;
			else
				i++;
		}
		return 1;
	}
	else
	{
		printf("Invalid Stack.");
		return 0;
	}
}
int underflow(int stack)
{
    if(stack=='a'||stack=='A')
	{
		if (stka[0][0]=='\0')
			return 1;
		return 0;
	}
	else if(stack=='b'||stack=='B')
	{
		if (stkb[0][0]=='\0')
			return 1;
		return 0;
	}
	else if(stack=='c'||stack=='C')
	{
		if (stkc[0][0]=='\0')
			return 1;
		return 0;
	}
	else
	{
		printf("Invalid Stack.");
		return 0;
	}
}
int push(char a[], int stack)
{
    if (stack=='a'||stack=='A')
	{
			if (!overflow(stack))
		{
			int end=0;
			for(int i=0;i<rows;i++)
			{
				if (stka[i][0]=='\0')
				{
					for(int j=0;j<cols;j++)
					{
						stka[i][j]=a[j];
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
	else if (stack=='b'||stack=='B')
	{
			if (!overflow(stack))
		{
			int end=0;
			for(int i=0;i<rows;i++)
			{
				if (stkb[i][0]=='\0')
				{
					for(int j=0;j<cols;j++)
					{
						stkb[i][j]=a[j];
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
	else if (stack=='c'||stack=='C')
	{
			if (!overflow(stack))
		{
			int end=0;
			for(int i=0;i<rows;i++)
			{
				if (stkc[i][0]=='\0')
				{
					for(int j=0;j<cols;j++)
					{
						stkc[i][j]=a[j];
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
	else
	{
		printf("Invalid Stack.");
		return 0;
	}
}
int pop(int stack)
{
    if (stack=='a'||stack=='A')
	{
		if(!underflow(stack))
		{
			int j;
			for(int i=rows-1;i>=0;i--)
			{
				if (stka[i][0]!='\0')
				{
					for(j=0;stka[i][j]!='\0';)
					{
						popa[j]=stka[i][j];
						j++;
					}
					popa[j]='\0';
					stka[i][0]='\0';
					break;
				}
			}
			return 1;
		}
		else
		{
			printf("\n\tCANNOT POP (StackAUnderflow)\n\n");
			popa[0]='\0';
			return 0;
		}
	}
	else if (stack=='b'||stack=='B')
	{
		if(!underflow(stack))
		{
			int j;
			for(int i=rows-1;i>=0;i--)
			{
				if (stkb[i][0]!='\0')
				{
					for(j=0;stkb[i][j]!='\0';)
					{
						popb[j]=stkb[i][j];
						j++;
					}
					popb[j]='\0';
					stkb[i][0]='\0';
					break;
				}
			}
			return 1;
		}
		else
		{
			printf("\n\tCANNOT POP (StackBUnderflow)\n\n");
			popb[0]='\0';
			return 0;
		}
	}
	else if (stack=='C'||stack=='c')
	{
		if(!underflow(stack))
		{
			int j;
			for(int i=rows-1;i>=0;i--)
			{
				if (stkc[i][0]!='\0')
				{
					for(j=0;stkc[i][j]!='\0';)
					{
						popc[j]=stkc[i][j];
						j++;
					}
					popc[j]='\0';
					stkc[i][0]='\0';
					break;
				}
			}
			return 1;
		}
		else
		{
			printf("\n\tCANNOT POP (StackCUnderflow)\n\n");
			popc[0]='\0';
			return 0;
		}
	}
}

void hanoi(int fromstack, int diskno, int tostack,int midstack)
// call format - move from stack - fromstack disk - diskno to stack - tostack with stack - midstack as auxilliary stack
{
    if (diskno==1)
    {
		//printf("Move disk %d from stack %s to stack %s\n",diskno,fromstack,tostack);
		if (fromstack=='a'|| fromstack=='A')
		{
			pop('a');
			sprintf(popped,"%s",popa);
		}
		else if (fromstack=='b'|| fromstack=='B')
		{
			pop('b');
			sprintf(popped,"%s",popb);
		}
		else if (fromstack=='c'|| fromstack=='C')
		{
			pop('c');
			sprintf(popped,"%s",popc);
		}

		if (tostack=='A'|| tostack=='a')
		{
			push(popped,'a');
		}
		else if (tostack=='b'|| tostack=='B')
		{
			push(popped,'b');
		}
		else if (tostack=='c'|| tostack=='C')
		{
			push(popped,'c');
		}
		display('a');
		display('b');
		display('c');
		printf("\n\n---------------------------");

		return;
    }
    else
    {
        hanoi(fromstack,(diskno-1),midstack,tostack);
		//printf("Move disk %d from stack %s to stack %s\n",diskno,fromstack,tostack);
		if (fromstack=='a'|| fromstack=='A')
		{
			pop('a');
			sprintf(popped,"%s",popa);
		}
		else if (fromstack=='b'|| fromstack=='B')
		{
			pop('b');
			sprintf(popped,"%s",popb);
		}
		else if (fromstack=='c'|| fromstack=='C')
		{
			pop('c');
			sprintf(popped,"%s",popc);
		}

		if (tostack=='A'|| tostack=='a')
		{
			push(popped,'a');
		}
		else if (tostack=='b'|| tostack=='B')
		{
			push(popped,'b');
		}
		else if (tostack=='c'|| tostack=='C')
		{
			push(popped,'c');
		}
		display('a');
		display('b');
		display('c');
		printf("\n\n---------------------------");
		hanoi(midstack,(diskno-1),tostack,fromstack);
    }
}


int main()
{
	initialise('A');
	initialise('B');
	initialise('C');
	for (int i=rows;i>=1;i--)
	{
		char aaaa[cols];
		sprintf(aaaa,"%d",i);
		push(aaaa,'a');
	}
	display('a');
	display('b');
	display('c');
	printf("\n\n");
	hanoi('a',rows,'c','b');

}
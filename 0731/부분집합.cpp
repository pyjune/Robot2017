#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void f(int n, int k);
int L[3];
int a[] = {1, 2, 3};

int main(int argc, char** argv) {
	
	f(0, 3);
		
	return 0;
}

void f(int n, int k)
{
	if(n==k)
	{
		for(int i = 0; i<k; i++)
		{
			//printf("%d ", L[i]);
			if(L[i]==1)
			{
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
	else
	{
		L[n] = 1;
		f(n+1, k);
		L[n] = 0;
		f(n+1, k);
		
	}
}

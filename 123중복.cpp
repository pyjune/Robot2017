#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void f(int n, int k);
int L[3];


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
			printf("%d ", L[i]);
		}
		printf("\n");
	}
	else
	{
		for(int i = 1; i<=3; i++)
		{
			L[n] = i;
			f(n+1, k);
		}		
	}
}

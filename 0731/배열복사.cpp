#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void f(int n, int k);
int a[3] = {10, 20, 30};
int b[3];

int main(int argc, char** argv) {
	
	f(0, 3);
	
	printf("%d %d %d\n", b[0], b[1], b[2]);
	return 0;
}

void f(int n, int k)
{
	if(n==k)
	{
		return;
	}
	else
	{
		b[n] = a[n];
		f(n+1, k);
	}
}

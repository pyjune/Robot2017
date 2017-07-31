#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int M[5][5] = {5, 6, 1, 5, 5,
				2, 7, 6, 1, 8,
				7, 8, 2, 6, 6,
				9, 5, 1, 8, 1,
				1, 1, 3, 8, 7};
				
int min = 0x7fffffff;

void find(int r, int c, int s);
int cnt;

int main(int argc, char** argv) {
	
	find(0, 0, 0);
	
	printf("%d %d\n", min, cnt);
	return 0;
}

void find(int r, int c, int s)
{
	cnt++;
	if(r==4 && c==4)
	{
		if((s+M[4][4])<min)
			min = s+M[4][4];
	}
	else if(s>=min)
	{
		return;
	}
	else
	{
		if(c<4)
			find(r, c+1, s+M[r][c]);
		if(r<4)
			find(r+1, c, s+M[r][c]);
			
	}
}

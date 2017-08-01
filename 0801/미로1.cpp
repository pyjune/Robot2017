#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int m[100][100];
int N;

int find(int r, int c);

int main(int argc, char** argv) {
	int T;
	
	int start_r, start_c;
	
	freopen("Text.txt", "r", stdin);
	scanf("%d", &T);
	for(int tc=1; tc<=T; tc++)
	{
		scanf("%d", &N);
		for(int i = 0; i<N; i++)
		{
			for(int j =0; j<N; j++)
			{
				scanf("%1d", &m[i][j]);
				if(m[i][j]==2)
				{
					start_r = i;
					start_c = j;
				}
			}
		}
		int r = find(start_r, start_c);
		printf("#%d %d\n", tc, r);
	}
	return 0;
}

int find(int r, int c)
{
	if(m[r][c] == 3) // 도착 
	{
		return 1;
	}
	else if(m[r][c] == 1) // 벽 
	{
		return 0;
	}
	else
	{
		m[r][c] = 1;
		// 오른쪽 
		if(c+1<N) // 벽으로 둘러쌓인 미로의 경우 필요없음 
		{
			if(find(r, c+1)==1)
				return 1;
		}
		if(find(r+1, c)==1)
			return 1;
		if(find(r, c-1)==1)
			return 1;
		if(find(r-1, c)==1)
			return 1;
		return 0;
	}
}

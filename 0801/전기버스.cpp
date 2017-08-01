#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int bat[10];

void drive(int n, int k, int e, int c);
int minValue = 0x7fffffff;
int main(int argc, char** argv) {
	
	int T, N;
	freopen("Text.txt", "r", stdin);
	
	scanf("%d", &T);
	for(int tc=1; tc<=3; tc++)
	{
		scanf("%d", &N);
		for(int i=1; i<N; i++)
		{
			scanf("%d", &bat[i]);
		}
		
		// 출발지 교체횟수 제외.. 
		//drive(1, N, 0, 0);
		//printf("#%d %d\n", tc, minValue-1);
		
		drive(2, N, bat[1]-1, 0);
		printf("#%d %d\n", tc, minValue);
		minValue = 0x7fffffff;
	}
	
	
	return 0;
}
// n 정류장
// k 종점
// e 정류장에서의 남은 에너지
// c 정류장까지의 교환 횟수 
void drive(int n, int k, int e, int c)
{
	if( n==k )
	{
		if(minValue>c)
			minValue = c;
	}
	else
	{
		// 통과
		if( e>0 )
			drive(n+1, k, e-1, c); 
		
		// 교체 
			drive(n+1, k, bat[n]-1, c+1 );
	}
}

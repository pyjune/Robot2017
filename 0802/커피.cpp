#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char menu[][20]={"","Latte", "Expresso", "Mocha","Americano", "Cocoa"};
int price[]={0,2000,1000, 2500, 1500, 3000};
int bill[]={0,10000,5000,1000};
int total;
int pay;

int main(int argc, char** argv) {
	
	int menuN = sizeof(price)/sizeof(int) -1;
	int billN = sizeof(bill)/sizeof(int)-1;
	
	// 메뉴 출력	
	for(int i=1;i<=menuN;i++)
	{
		printf("%d. %-20s %5d\n", i, menu[i], price[i]);
	}
	// 음료 선택 
	int select;
	total = 0;
	while(1)
	{
		printf("원하는 음료를 선택하세요. (지불은 0번) : ");
		scanf("%d", &select);
		if(select==0)
			break;
		total +=price[select];
		printf("선택한 음료는 %s, %d원, 합계 %d원\n",menu[select], price[select],total);		
	}
	// 지불
	pay=0;
	for(int i = 1; i<=billN; i++)
	{
		printf("%d.%d원  ", i, bill[i]);
	}
	printf("\n");
	while(pay<total)
	{
		int n; 
		printf("지불 금액을 입력하세요 : ");
		scanf("%d", &n);
		pay += bill[n];
		printf("합계 %d원, 지불 %d원\n", total, pay); 
	} 
	printf("거스름 %d원\n", pay-total); 
	return 0;
}

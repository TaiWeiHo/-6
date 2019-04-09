#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	printf("輸入西元年數:");
	scanf("%d",&year);
	if(year%4==0)
	{if(year%100==0)
	{if(year%400==0)
	printf("西元%d是閏年\n",year);
	else
	printf("西元%d不是閏年\n",year);
	}
	else
	printf("西元%d不是閏年\n",year);
	}
	else
	printf("西元%d不是閏年\n",year);
	system("pause");
	return 0;
}

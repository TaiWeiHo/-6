#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	printf("��J�褸�~��:");
	scanf("%d",&year);
	if(year%4==0)
	{if(year%100==0)
	{if(year%400==0)
	printf("�褸%d�O�|�~\n",year);
	else
	printf("�褸%d���O�|�~\n",year);
	}
	else
	printf("�褸%d���O�|�~\n",year);
	}
	else
	printf("�褸%d���O�|�~\n",year);
	system("pause");
	return 0;
}

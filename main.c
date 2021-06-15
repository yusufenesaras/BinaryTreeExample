#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

int main(int argc, char *argv[])
{
	int sayi;
	printf("Programi sonlandirmak icin negatif sayi giriniz.\n");  
	for(;;)
	{
		printf("Sayi giriniz: ");
		scanf("%d", &sayi);
		if(sayi<0) break;
		add(sayi);
	}
	
	printf("ikili agac:\n");
	list();
		
  return 0;
}


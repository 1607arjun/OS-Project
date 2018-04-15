#include<stdio.h>
#include<stdlib.h>
int main()
{
	double pagef;//page fault rate
	int inteffat=200;//effactive access time should be <200
	int memat=100;//memory access time
	float psuc=0.7;//for 20 msec
	printf("****************************WELCOME TO DEMAND PAGING*******************************\n\n\n\n");
	printf("Formula used for paging demand\n\n");
	printf("(1 - pagef) * memat + (psuc * pagef * 20000000)+ ((1-psuc) * pagef * 8000000) = inteffat\n");
	printf("(1 - pagef) * 100 + (0.7 * pagef * 20000000)+ (0.3 * pagef * 8000000)= 200\n\n");
   
}

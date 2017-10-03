#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int i, j;
	float a, b, *x, *y;
	FILE *arq;

	arq=fopen(argv[1], "r");

	i=0;
	while(fscanf(arq, "%f %f", &a, &b)!=EOF)
	{
		x=malloc(sizeof(float*));
		y=malloc(sizeof(float*));

		x[i]=a;
		y[i]=b;

		i++;
	}

	printf("\n Dados lidos: \n");
	for(j=0; j<i; j++)
		 printf(" x=%f \t y=%f \n", x[j], y[j]);
	printf("\n\n");
}

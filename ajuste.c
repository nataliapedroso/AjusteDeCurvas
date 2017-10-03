#include<stdio.h>
#include<math.h>
FILE *arquivo;
#define n 10

void coeficientes(double x1[n], double y1[n])
{
	int i;
	double Sx, Sy, Sxy, Sxx, a0, a1;

	Sx=0;
	Sy=0;
	Sxy=0;
	Sxx=0;

	// somatórios
	for(i=0; i<n; i++)
	{
		Sx=Sx+x1[i];
		Sxx=Sxx+x1[i]*x1[i];
		Sxy=Sxy+x1[i]*y1[i];
		Sy=Sy+y1[i];
	}

	a0=(Sxx*Sy-Sxy*Sx)/(n*Sxx-Sx*Sx);
	a1=(n*Sxy-Sx*Sy)/(n*Sxx-Sx*Sx);

	printf("\n a1=%lf \n a0=%lf \n", a1, a0);
}

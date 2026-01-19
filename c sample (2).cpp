#include <stdio.h>

#include <complex.h>

int main(){
	double _Complex z1 = 1.0 + 2.0 *I;
	double _Complex z2 = 3.0 + 4.0 *I;
	
	double _Complex sum = z1 + z2;
	double _Complex product = z1 * z2;
	
	printf("z1 = %.2f + %.2fi\n", creal (z1), cimag(z1));
	printf("z2 = %.2f + %.2fi\n", creal (z2), cimag(z2));
	printf("sum: z1 +z2 = %.2f + %.2fi\n", creal (sum), cimag(sum));
	printf("product: z1 * z2 =%.2f + %.2fi\n", creal (product), cimag(product));
	
	return 0;
}
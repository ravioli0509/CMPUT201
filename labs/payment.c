#include <stdio.h>

int main() {

	float a, r, p, b, o, u;

	printf("Enter the amount of loan: ");
	scanf("%f", &a);
	printf("Enter the interest rate: ");
	scanf("%f", &r);

	o = a;
	u = a / 12;

	while (1) {
		p = (o + u) / 2;
		b = a;
		for (int i = 0; i < 12; i++) {
			b = b - p + b * r / 1200;
		}
		if (b == 0.0) break;
		else if (b > 0.0) u = p;
		else o = p;
	}

	printf("The monthly payment: %.2f\n", p);

	return 0;
}
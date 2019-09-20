#include <stdio.h>

int main() {

	float trans, comm;

	printf("Enter the value of the trade: ");
	scanf("%f", &trans);

	if (trans < 0) {
		return -1;
	}
	else if (trans < 2500) {
		comm = 30 + 0.017 * trans;
	}
	else if (trans < 6250) {
		comm = 56 + 0.0066 * trans;
	}
	else {
		comm = 76 + 0.0034 * trans;
	}

	printf("Commission: $%.2f\n", comm);

	return 0;
}
#include <stdio.h>
#include <math.h>

double funi(int);
double funr(int, int);

int fib(int);

int main() {
	int n;

	scanf("%d", &n);

	printf("%lf\n", funi(n));
	printf("%lf\n", funr(1, n));

	return 0;
}

double funi(int n) {
	double sum;
	int i;

	for(i = n; i > 0; i--) {
		if(i == n) {
			sum = sqrt(fib(i));
		}else {
			sum = sqrt(fib(i) / pow(i % 2 + 1, n - i + 1) + sum);	
		}
	}

	return sum;
}

double funr(int i, int n) {
	if(i == n) {
		return sqrt(fib(i));	
	}

	return sqrt(fib(i) / pow(i % 2 + 1, n - i + 1) + funr(i + 1, n));	
}

int fib(int n) {
	if(n <= 2) {
		return 1;	
	}

	return fib(n - 1) + fib(n - 2);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	float sum = 0;
	int max = 0;
	scanf("%d", &n);
	int a[1000];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (i = 0; i < n; i++) {
		sum += (float)a[i] / max * 100;

	}
	printf("%f", sum / n);
}

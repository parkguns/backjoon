#include <stdio.h>

int main()
{
	int a[101] = {0, };
	int c;
	int n, m;
	scanf("%d %d", &n, &m);
	for (c = 1; c <= n; c++) {
		a[c] = c;
	}
	int b, i, d, j, temp;
	for (b = 0; b < m; b++) {
		scanf("%d %d", &i, &j);
		for (d = i; d <= j; d++) {
			temp = a[d];
			a[d] = a[j];
			a[j] = temp;
			j--;
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
}

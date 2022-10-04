#include <stdio.h>

// https://codeforces.com/problemset/problem/231/A
int main() {
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int i = 0; i < n; i++) {
		int temp, ctemp = 0;
		for(int j = 0; j < 3; j++) {
			scanf("%d", &temp);
			if(temp == 1) ctemp++;
		}
		if(ctemp >= 2) count++;
	}
	printf("%d\n", count);
	return 0;
}

#include <stdio.h>

// https://codeforces.com/problemset/problem/50/A

int main() {
	int n, k, c = 0, num;
	scanf("%d %d", &n, &k);

	int temp[n] = {0};
	for(int i = 0; i < n; i++) {
		scanf("%d", &temp[i]);
		if(i+1 == k) num = temp[i];
	}

	for(int i = 0; i < n; i++) {
		if(temp[i] >= num && temp[i] > 0) {
			c++;
			
		}
	}
	printf("%d\n", c);
	return 0;
}

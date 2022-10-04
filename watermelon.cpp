#include <stdio.h>

// https://codeforces.com/contest/4/problem/A

int main() {
	int in;
	scanf("%d", &in);
	if(in % 2 == 0 && in > 2) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}

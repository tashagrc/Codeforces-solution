#include <stdio.h>

// https://codeforces.com/problemset/problem/1/A

int main() {
	long long int n, m, a;
	scanf("%lld %lld %lld", &n, &m, &a);
	long long int hor = (n/a) + ((n%a > 0) ? 1 : 0);
	long long int ver = (m/a) + ((m%a > 0) ? 1 : 0);
	printf("%lld\n", hor*ver);
	return 0;
}

#include <stdio.h>
#include <string.h>
// https://codeforces.com/problemset/problem/71/A

int main() {
	int in;
	scanf("%d", &in);
	for(int i = 0; i < in; i++) {
		char str[101];
		scanf("%s", str);
		if(strlen(str) > 10) {
			printf("%c%d%c\n", str[0], strlen(str) - 2, str[strlen(str)-1]);
		}
		else {
			printf("%s\n", str);
		}
	}
	
	return 0;
}

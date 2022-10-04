#include <stdio.h>

int positive(int x) {
	if(x < 0) return x*-1;
	else return x;
}

int distance(int x, int y) {
	return positive(x-2) + positive(y-2);
}
int main() {
	int temp, x, y;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			scanf("%d", &temp);
			if(temp == 1) {
				x = j;
				y = i;
			}
		}
	}
	printf("%d\n", distance(x, y));
	return 0;
}

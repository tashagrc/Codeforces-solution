#include <stdio.h>
#include <string.h>

int main() {
	int n, time;
	scanf("%d %d", &n, &time);
	char queue[n+1];
	scanf("%s", queue);
	for(int a = 0; a < time; a++) {
		for(int i = 0, n = strlen(queue); i < n; i++) {
			if(queue[i] == 'B' && queue[i+1] == 'G') {
				queue[i] = 'G';
				queue[i+1] = 'B';
				i++;
			}
		}
	}
	printf("%s\n", queue);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

// https://open.kattis.com/problems/warringscoring

int main() {
	int jml;
	scanf("%d", &jml);
	getchar();
	
	char str[50];
	int y = 0, ly = 0, cy = 0, n = 0, ln = 0, cn = 0;
	int maxY = 0;
	int maxN = 0;
	
	for(int i = 0; i < jml; i++) {
		scanf("%s", str);
		getchar();
		
		if(strcmp(str, "Notnomde") == 0) {
			++n;
			++cn;
			if(cn > maxN) {
				maxN = cn;
			}
			
			cy = 0;
		}
		else {
			++y;
			
			++cy;
			if(cy > maxY) {
				maxY = cy;
			}
			
			
			cn = 0;
		}
		
		// lead
		if((y-n) > -1 && (y-n) > ly) {
			ly = y - n;
		}
		else if((n-y) > -1 && (n-y) > ln) {
			ln = n - y;
		}
		
		
//		
//		printf("ly = %d, ln = %d, cy = %d, cn = %d\n", ly, ln, cy, cn);
//		printf("maxN = %d, maxY = %d\n", maxN, maxY);
	}
	
	// cek kedua sistem
	
	if((ly > ln && maxY > maxN) || (ln > ly && maxN > maxY) || (ln == ly && maxN == maxY)) {
		printf("Agree\n");
	}
	else {
		printf("Disagree\n");
	}
	return 0;
}


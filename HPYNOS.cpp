/*
Author: Srikanth Mujjiga (smujjiga)
Date: 08.March.2015
Problem: Happy Numbers I http://www.spoj.com/problems/HPYNOS/
Problem code: HPYNOS
Type: 
*/

#include <stdio.h>
int map[100000] = {0};

int main_HPYNOS() {
	int n,m,c=0;
	scanf("%d",&n);
	int sum = 0;
	while(n!=1 && n != 0) {
		c++;
		sum = 0;
		while(n) {
			m = n%10;
			sum += (m*m);
			n /= 10;
		}
		n = sum;
		if (map[n] == 0)
			map[n] = 1;
		else {
			n = 0;
			c = 0;
		}
	}
		printf("%d\n",c?c:-1);
	return 0;
}


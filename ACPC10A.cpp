/*
Author: Srikanth Mujjiga (smujjiga)
Date: 08.March.2015
Problem: What’s Next http://www.spoj.com/problems/ACPC10A/ 
Problem code: ACPC10A
Type: AP GP
AP  an=a1+(n-1)d
GP  an= a*r^(n-1) or an = r*a[n-1]
*/

#include <stdio.h>

int main_ACPC10A() {
	int a,b,c;
	int d1,d2;
	int r;
	while(1) {
		scanf("%d%d%d",&a,&b,&c);
		if (a==0 && b==0 && c==0)
			break;

		d1 = b-a;
		d2 = c-b;
		if (d1 == d2) // AP
		{
			printf("AP %d\n",a+(3)*d1);
		} else {
			r = b/a;
			printf("GP %d\n",r*c);
		}
	}
	return 0;
}


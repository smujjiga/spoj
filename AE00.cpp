/*
Author: Srikanth Mujjiga (smujjiga)
Date: 08.March.2015
Problem: Rectangles http://www.spoj.com/problems/AE00/
Problem code: AE00
Type: puzzle - http://main.edu.pl/images/PA2009/pro1.gif
Start form a squre and go on extneding it (to form rectangles)
*/

#include <stdio.h>

int main_AE00() {
	int n;
	scanf("%d",&n);
	int ans = n;
	int i=2;
	int k;
	int left;
	while(1) {
		left = n-(i*i);

		if (left<0) 
			break;
		
		ans++;
		k = left/i;
		if (k==0)
			break;
		ans+=k;
		i++;
	}
	printf("%d\n",ans);
	return 0;
}


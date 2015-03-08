/*
Author: Srikanth Mujjiga (smujjiga)
Date: 08.March.2015
Problem: Army Strength http://www.spoj.com/problems/ARMY/
Problem code: ARMY
Type: 
*/

#include <stdio.h>

int max(int i,int j) {
	return i>j?i:j;
}

int main() {
	int t;
	unsigned long int ng,nm;
	unsigned long int mg,mm;
	unsigned long int val;
	scanf("%d",&t);
	while(t--) {
		scanf("%ld",&ng);
		scanf("%ld",&nm);
		mg = mm = 0;

		for(int i=0;i<ng;i++) {
			scanf("%ld",&val);
			mg = max(mg,val);
		}

		for(int i=0;i<nm;i++) {
			scanf("%ld",&val);
			mm = max(mm,val);
		}

		if (mg >= mm)
			printf("Godzilla\n");
		else 
			printf("MechaGodzilla\n");

	}
	return 0;
}


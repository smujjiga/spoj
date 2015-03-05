/*
Author: Srikanth Mujjiga (smujjiga)
Date: 05.Mar.2015
Problem: 3442. The last digit http://www.spoj.com/problems/LASTDIG/
Problem code: LASTDIG
Type: Find the cycle and mod with cycle length
*/

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	unsigned long long int b;
	int a,ad,r;
	int input[][6] = { {0}, {1}, {2,4,8,6,2},{3,9,7,1},{4,6},{5},{6},{7,9,3,1},{8,4,2,6},{9,1}};
	while(t--) {
		scanf("%d%lld",&a,&b);
		ad = a%10;

		if (a==0)
			r = 0;
		else if (b==0)
			r=1;
		else if (ad==0 || ad==1 || ad==5 || ad==6)
			r=input[ad][0];
		else if(ad==2 || ad==3 || ad==7 || ad==8) 
			r = input[ad][(b-1)%4];
		else if(ad==4 || ad==9)
			r = input[ad][(b&1)?0:1];

		printf("%d\n",r);
	}
	return 0;
}

/*
Input:
2
3 10
6 2

Output:
9
6
*/
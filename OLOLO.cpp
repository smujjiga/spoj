/*
Author: Srikanth Mujjiga (smujjiga)
Date: 08.March.2015
Problem: Onotole needs your help http://www.spoj.com/problems/OLOLO/
Problem code: OLOLO
Type: XOR
*/

#include <iostream>
#include <stdio.h>
#include <climits>
#include <algorithm>
using namespace std;

#ifdef _WIN32
inline int getchar_unlocked() { return getchar(); }
inline int putchar_unlocked(char c) { return putchar(c); }
#endif

inline void fastRead_int(unsigned int &num) {
    register int c = getchar_unlocked();
	register unsigned int x = 0;
	for(; c>47 && c<58 ; c = getchar_unlocked())
    	x = (x<<1) + (x<<3) + c - 48;
	num = x;
}

int main_OLOLO() {
	unsigned int n;
	unsigned int ans;
	unsigned int i;
	fastRead_int(n);
	n--;
	fastRead_int(ans);
	while(n--) {
		fastRead_int(i);
		ans^=i;
	}
	printf("%ld\n",ans);
	return 0;
}


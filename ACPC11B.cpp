/*
Author: Srikanth Mujjiga (smujjiga)
Date: 25.Feb.2015
Problem: 10239. Between the Mountains http://www.spoj.com/problems/ACPC11B/ 
Problem code: ACPC11B
Type: Sorting - Adhoc
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

inline void fastRead_int(int &num) {
    register int c = getchar_unlocked();
	register int x = 0;
	for(; c>47 && c<58 ; c = getchar_unlocked())
    	x = (x<<1) + (x<<3) + c - 48;
	num = x;
}

typedef struct Altitude {
	int value;
	char mountain;	
}Altitude;

bool myfunction (Altitude i,Altitude j) { return (i.value<j.value); }

int main_ACPC11B() {
	int t;
	fastRead_int(t);
	int N,value;	
	Altitude altitudes[10010];
	int c;
	while(t--) {
		fastRead_int(N);
		c = 0;
		for (int i=0;i<N;i++) {
			fastRead_int(value);
			altitudes[c].value = value; 
			altitudes[c++].mountain = 0;
		}

		fastRead_int(N);
		for (int i=0;i<N;i++) {
			fastRead_int(value);
			altitudes[c].value = value;
			altitudes[c++].mountain = 1;
		}

		sort(altitudes,altitudes+c,myfunction);
		
		int min = INT_MAX;

		for(int i=1;i<c;i++) {
			if (altitudes[i-1].mountain != altitudes[i].mountain && min > altitudes[i].value - altitudes[i-1].value) {
			//	cout<<"\nsubbing:"<<altitudes[i].mountain<<" and "<<altitudes[i-1].mountain;
				min = altitudes[i].value - altitudes[i-1].value;
				if (min == 0) break;
			}
		}
		printf("%d\n",min);
	}
	return 0;
}


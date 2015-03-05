/*
Author: Srikanth Mujjiga (smujjiga)
Date: 25.Feb.2015
Problem: 11. Factorial http://www.spoj.com/problems/FCTRL/
Problem code: FCTRL
Type: Find # multiples of 5, because 5*even has 0 at the end. 
*/

#include <iostream>
using namespace std;

#ifdef _WIN32
inline int getchar_unlocked() { return getchar(); }
inline int putchar_unlocked(char c) { return putchar(c); }
#endif

int main_FCTRL() {
	int t;
	scanf("%d",&t);
	int N;
	unsigned long int count;
	int f;
	while(t--) {
		scanf("%d",&N);
		count = 0;
		f = 5;
		while(N/f > 0) {
			count+= N/f;
			f*=5;
		}
		printf("%ld\n",count);
	}
	
	return 0;
}	



/*
Sample Input:

6
3
60
100
1024
23456
8735373
Sample Output:

0
14
24
253
5861
2183837
*/
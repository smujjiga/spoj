/*
Author: Srikanth Mujjiga (smujjiga)
Date: 08.March.2015
Problem: Christmas Play http://www.spoj.com/problems/AMR10G/
Problem code: AMR10G
Type: 
*/

#include <stdio.h>
#include <algorithm>
#include <climits>

int main_AMR10G() {
	int t,n,k;
	scanf("%d",&t);
	unsigned long int ans;
	unsigned long int h[20010];
	while (t--) {
		ans = INT_MAX;
		scanf("%d%d",&n,&k);
		for (int i=0;i<n;i++)
			scanf("%ld",&h[i]);

		if (k==1)
			ans = 0;
		else {
			std::sort(h,h+n);
			for (int j=(k-1);j<n;j++) {
				ans = std::min(ans,h[j]-h[j-(k-1)]);
				if (ans == 0) 
					break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}


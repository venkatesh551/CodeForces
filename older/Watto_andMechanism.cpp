#include <stdio.h>
#include <string.h>
#include <string>
#include <set>
using namespace std;
char c[700000];
set< long long > st;
long long mod = 1000000000007LL;
int main(){
	int n, m, i, j, x;
	long long r, t;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%s", c);
		r = 0;
		for (j = 0; c[j]; j++) {
			r = (r * 4 + c[j] - 'a' + 1) % mod;
		}
		st.insert(r);
	}
	while (m--) {
		scanf("%s", c);
		int flag = 0;
		r = 0;
		for (j = 0; c[j]; j++) {
			r = (r * 4 + c[j] - 'a' + 1) % mod;
		}
		t = 1;
		for (j = strlen(c) - 1; j >= 0; j--) {
			x = c[j] - 'a' + 1;
			r = (r - (t * x) % mod + mod) % mod;
			for (int k = 1; k < 4; k++) {
			if (k == x) continue;
			r = (r + t * k) % mod;
			if (st.find(r) != st.end()) {
				flag = 1;
				break;
			}
			r = (r - (t * k) % mod + mod) % mod;
		}
		if (flag) break;
		r = (r + t * x) % mod;
		t = (t * 4) % mod;
		}
		if (!flag) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}



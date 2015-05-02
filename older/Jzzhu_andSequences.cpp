#include <iostream>

using namespace std;

#define FOR(k,a,b) for(typeof(a) k=(a); k < (b); ++k)
typedef long long ll;
using namespace std;
 
#define dim 3
 
struct matrix {
    int a[dim][dim];
};
 
#define MOD 1000000007
  
matrix mul(matrix x, matrix y) {
    matrix res;
    FOR(a,0,dim) FOR(b,0,dim) res.a[a][b] = 0;
    FOR(a,0,dim) FOR(b,0,dim) FOR(c,0,dim) {
	res.a[a][c] += (x.a[a][b] * ll(y.a[b][c])) % MOD;
	res.a[a][c] %= MOD;
    }
    return res;
}
 
matrix power(matrix m, int n) {
	 
    if(n == 1) return m;
    matrix u = mul(m, m);
    u = power(u, n/2);
    if(n&1) u = mul(u, m);
    return u;
}


 
int main()
{
	matrix M, C, RP, A;
	
    FOR(a,0,dim) FOR(b,0,dim) M.a[a][b] = 0;
    M.a[0][0] = M.a[1][0] = 1;
    M.a[0][1] =  -1; M.a[1][1] = 0;
    C.a[0][1] = C.a[1][1] = 0;
    int nt, x, y;
    cin >> x >> y >> nt;
    
   
  
	if (nt == 1)
	{
		 if (x  < 0)
	   	{
	   		x += MOD;
	   	}
		cout << x << endl;
	}
	else if (nt == 2)
	{
		 	if (y < 0)
		   	{
		   		y += MOD;
		   	}
		cout << y << endl;
	}
	else
	{
		int rs = nt - 2;
		RP = power(M, rs);
		C.a[0][0] = y;
		C.a[1][0] = x;
		A = mul(RP, C);
		long long ans =  A.a[0][0];
		if (ans < 0)
		{	
			ans += MOD;
		}
		cout << ans << endl;
    }
    return 0;
}
 

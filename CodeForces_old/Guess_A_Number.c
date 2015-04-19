#include <stdio.h>

enum sign_type
{
	LESSTHAN,
	LESSTHANOREQUALTO,
	GREATERTHAN,
	GREATERTHANOREQUALTO,
	INVALID
};

enum sign_type get_InverseType(enum sign_type p)
{
	switch(p)
	{
		case LESSTHAN: 
			return GREATERTHANOREQUALTO;
		case LESSTHANOREQUALTO: 
			return GREATERTHAN;
		case GREATERTHAN:
			return LESSTHANOREQUALTO;
		case GREATERTHANOREQUALTO:
			return LESSTHAN;
		case INVALID:
			return INVALID;
	}
	return INVALID;
}

enum sign_type get_Sign(char *sign)
{
	if (sign[0] == '<')
	{
		if (sign[1] == '=')
		{
			return LESSTHANOREQUALTO;
		}
		else
		{
			return LESSTHAN;	
		}

	}
	else
	{
		if (sign[1] == '=')
		{
			return GREATERTHANOREQUALTO;
		}
		else
		{
			return GREATERTHAN;
		}
	}
}

int max (int a, int b)
{
	return a > b ? a : b;
}

int min (int a, int b)
{
	return a < b ? a : b;
}

#define MAX_VAL 1000000000
static int a = 2 * MAX_VAL, 
b = 2 * MAX_VAL, 
c = -2 * MAX_VAL, 
d = -2 * MAX_VAL;

void update_Values(enum sign_type p, int x)
{
	switch(p)
	{
		case LESSTHANOREQUALTO : 
			a = min(a, x); break;
		case LESSTHAN: 
			b = min(b, x); break;
		case GREATERTHAN:
			c = max(c, x); break;
		case GREATERTHANOREQUALTO:
			d = max(d, x); break;
		case INVALID:
			break;
	}	
}

int main(void)
{
	int n, y, z;
	
	scanf("%d", &n);
	while (n--)
	{
		char sign[3], ans[2];
		int x;
		enum sign_type p;
		
		scanf("%s%d%s", sign, &x, ans);
		p = get_Sign(sign);
		if (ans[0] == 'N')
		{
			p = get_InverseType(p);	
		}
		update_Values(p, x);
	}
	y = max(c + 1, d);
	z = min(a, b-1);
	//printf ("%d %d %d %d\n", a, b, c, d);
	if (y <= z)
	{
		printf("%d\n", y);
	}
	else
	{
		puts("Impossible");
	}
	return 0;
}


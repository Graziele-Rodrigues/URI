#include<bits/stdc++.h>

int main()
{
	int l, r;

	for (;;) //for infinito 
	{
		scanf("%d %d", &l, &r);
		if (l == 0 && r == 0) break; //para
		else
		{
			printf("%d\n", (l+r));
		}
	}
	

	return 0;
}
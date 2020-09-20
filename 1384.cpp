#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, n, pa, pb, A, B;

	for (;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			pa = 0;
			pb = 0;
			for (i = 0; i < n; i++)
			{
				scanf("%d %d", &A, &B);
				if (A > B) pa++;
				else if (B > A) pb++;
			}
			printf("%d %d\n", pa, pb);
		}
	}
}

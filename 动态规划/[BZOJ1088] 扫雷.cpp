#define ll long long
#define R register
#include <bits/stdc++.h>

using namespace std;

const int maxn = 10005;

int n, a[maxn], f[maxn][2][2]; // 到了第i个位置，上一个位置有没有雷，当前位置有没有雷，下一个位置有没有雷，的情况个数
int main()
{
	scanf("%d", &n);
	for (R int i = 1; i <= n; ++i) scanf("%d", &a[i]);
	// f[0][0][0][0] = f[0][0][0][1] = f[0][0][1][0] = 1;
	// for (R int i = 1; i <= n; ++i)
	// {
	// 	if(a[i] == 0) 
	// 	{
	// 		f[i][0][0][0] += f[i - 1][0][0][0];
	// 		f[i][0][0][0] += f[i - 1][0][0][1];
	// 	}
	// 	if(a[i] == 1) 
	// 	{
	// 		f[i][1][0][0] += f[i - 1][0][1][0];
	// 		f[i][1][0][0] += f[i - 1][1][1][0];

	// 		f[i][0][1][0] += f[i - 1][0][0][1];
	// 		f[i][0][1][0] += f[i - 1][1][0][1];

	// 		f[i][0][0][1] += f[i - 1][1][0][0];
	// 		f[i][0][0][1] += f[i - 1][0][0][0];
	// 	}
	// 	if(a[i] == 2)
	// 	{
	// 		f[i][1][1][0] += f[i - 1][0][1][1];
	// 		f[i][1][1][0] += f[i - 1][1][1][1];

	// 		f[i][1][0][1] += f[i - 1][0][1][0];
	// 		f[i][1][0][1] += f[i - 1][1][1][0];

	// 		f[i][0][1][1] += f[i - 1][0][0][1];
	// 		f[i][0][1][1] += f[i - 1][1][0][1];
	// 	}
	// 	if(a[i] == 3)
	// 	{
	// 		f[i][1][1][1] += f[i - 1][0][1][1];
	// 		f[i][1][1][1] += f[i - 1][1][1][1];
	// 	}
	// }
	// ll ans = 0;
	// ans += f[n][1][1][0];
	// ans += f[n][0][1][0];
	// ans += f[n][0][0][0];
	// printf("%lld", ans);
	f[0][0][0] = f[0][0][1] = 1;
	for (R int i = 1; i <= n; ++i)
	{
		if(a[i] == 0)
			f[i][0][0] += f[i - 1][0][0];
		if(a[i] == 1)
			f[i][0][1] += f[i - 1][0][0],
			f[i][0][0] += f[i - 1][1][0],
			f[i][1][0] += f[i - 1][0][1];
		if(a[i] == 2)
			f[i][1][1] += f[i - 1][0][1],
			f[i][0][1] += f[i - 1][1][0],
			f[i][1][0] += f[i - 1][1][1],
		if(a[i] == 3)
			f[i][1][1] += f[i - 1][1][1];
	}
	printf("%d", f[n][1][0] + f[n][0][0]);
}
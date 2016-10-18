// POJ.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <cmath>
#define INF 999
using namespace std;
int main()
{
	
	while (true)
	{
		double t = INF, d = INF, h = INF;
		char alpha;
		for (int i = 0; i < 2; i++)
		{
			cin >> alpha;
			if (alpha == 'E')
			{
				return 0;
			}
			else if (alpha == 'T')
			{
				cin >> t;
			}
			else if (alpha == 'D')
			{
				cin >> d;
			}
			else if (alpha=='H')
			{
				cin >> h;
			}
		}
		//三选二
		if (h==INF)
		{
			h = t + 0.5555*(6.11*exp(5417.7530*(1 / 273.16 - 1 / (d + 273.16))) - 10);
		}
		else if (t == INF)
		{
			t = h - 0.5555*(6.11*exp(5417.7530*(1 / 273.16 - 1 / (d + 273.16))) - 10);
		}
		else if (d==INF)
		{
			d= 1 / ((1 / 273.16) - ((log((((h - t) / 0.5555) + 10.0) / 6.11)) / 5417.7530)) - 273.16;
		}

		printf("T %.1f D %.1f H %.1f\n", t, d, h);
	}

    return 0;
}


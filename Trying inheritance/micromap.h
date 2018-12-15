#pragma once
#include <cmath>
#include <limits.h>
#include <string>
#include <iostream>

using namespace std;
class cityhall
{
public:
	int type;
	cityhall(int citytype)
	{
		type = citytype;
	}
	void built()
	{
		char *a;
		int n, m;
		m = 50;
		n = 150;
		int flag = 1;
		a = (char*)malloc(m*n * sizeof(char));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{

				*(a + i * n + j) = ' ';
				if (j == 0 || j == 149)
				{
					*(a + i * n + j) = '|';
				}
				if (i == 0 || i == 49)
				{
					*(a + i * n + j) = '-';
				}
				if (j == 0 && i == 0)
				{
					*(a + i * n + j) = '+';
				}
				if (j == 0 && i == 49)
				{
					*(a + i * n + j) = '+';
				}
				if (j == 149 && i == 0)
				{
					*(a + i * n + j) = '+';
				}
				if (j == 149 && i == 49)
				{
					*(a + i * n + j) = '+';
				}
			}
		}
		switch (type)
		{
		case 1:
		{
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			break;
		}
		default:
			break;
		}
		free(a);
	}
};

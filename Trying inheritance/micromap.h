#pragma once
#include <cmath>
#include <limits.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class cityhall
{
private:
	int type;
public:
	
	cityhall(int citytype)
	{
		type = citytype;
	}
	void built()
	{
		string path ="city1.txt";
		ifstream fin;
		fin.open(path);
		char *a;
		int n, m;
		m = 50;
		n = 150;
		int flag = 1;
		a = (char*)malloc(m*n * sizeof(char));
		char ch;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				fin.get(ch);
				*(a + i * n + j) = ch;
				
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << *(a + i * n + j);
			}
			cout << endl;
		}
		/*switch (type)
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
		}*/
		free(a);
		fin.close();
	}
};

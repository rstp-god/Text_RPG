#pragma once
#include <cmath>
#include <limits.h>
#include <string>
#include <iostream>

using namespace std;
class city
{
protected:
	
	int posx,posy;
	string name;
public:
	city() { name = ""; posx = 10000; posy = 10000; }
	city(int a, int b, string example) 
	{
		posx = a;
		posy = b;
		name = example;

	}
	bool ishere(int a,int b)
	{
		if (posx == a && posy == b) 
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	~city() {  }
};

class map : public city
{
	

public:
	map() {};
	map(int currpossx,int currpossy)
	{ 
		
		/*int x1 = 20; int y1 = 20; string s1 = "el paso";
		city city1(x1, y1,s1);
		//1
		int x2 = 60; int y2 = 70; string s2 = "fort stockton";
		city city2(x2, y2, s2);
		//2
		int x3 = 90; int y3 = 70; string s3 = "el dorado";
		city city3(x3, y3, s3);
		//3
		int x4 = 120; int y4 = 60; string s4 = "brady";
		city city4(x4, y4, s4);
		//4
		int x5 = 150; int y5 = 60; string s5 = "san saba";
		city city5(x5, y5, s5);
		//5
		int x6 = 180; int y6 = 50; string s6 = "lampasas";
		city city6(x6, y6, s6);
		//6
		int x7 = 210; int y7 = 40; string s7 = "meridian";
		city city7(x7, y7, s7);
		//7
		int x8 = 240; int y8 = 30; string s8 = "dallas";
		city city8(x8, y8, s8);
		//8
		int x9 = 280; int y9 = 10; string s9 = "boston";
		city city9(x9, y9, s9);
		//9
		int x10 = 160; int y10 = 80; string s10 = "llana";
		city city10(x10, y10, s10);
		//10
		int x11 = 180; int y11 = 100; string s11 = "san antonio";
		city city11(x11, y11, s11);
		//11
		int x12 = 210; int y12 = 120; string s12 = "beevillee";
		city city12(x12, y12, s12);
		//12
		int x13 = 190; int y13 = 160; string s13 = "brownsville";
		city city13(x13, y13, s13);
		//13
		city cities[13];
		cities[0] = city1;
		cities[1] = city2;
		cities[2] = city3;
		cities[3] = city4;
		cities[4] = city5;
		cities[5] = city6;
		cities[6] = city7;
		cities[7] = city8;
		cities[8] = city9;
		cities[9] = city10;
		cities[10] = city11;
		cities[11] = city12;
		cities[12] = city13;*/
	}
	void mapopen()
	{
		int x1 = 2; int y1 = 2; string s1 = "el paso";
		city city1(x1, y1, s1);
		//1
		int x2 = 6; int y2 = 7; string s2 = "fort stockton";
		city city2(x2, y2, s2);
		//2
		int x3 = 9; int y3 = 7; string s3 = "el dorado";
		city city3(x3, y3, s3);
		//3
		int x4 = 12; int y4 = 6; string s4 = "brady";
		city city4(x4, y4, s4);
		//4
		int x5 = 15; int y5 = 6; string s5 = "san saba";
		city city5(x5, y5, s5);
		//5
		int x6 = 18; int y6 = 5; string s6 = "lampasas";
		city city6(x6, y6, s6);
		//6
		int x7 = 21; int y7 = 4; string s7 = "meridian";
		city city7(x7, y7, s7);
		//7
		int x8 = 24; int y8 = 3; string s8 = "dallas";
		city city8(x8, y8, s8);
		//8
		int x9 = 28; int y9 = 1; string s9 = "boston";
		city city9(x9, y9, s9);
		//9
		int x10 = 16; int y10 = 8; string s10 = "llana";
		city city10(x10, y10, s10);
		//10
		int x11 = 18; int y11 = 10; string s11 = "san antonio";
		city city11(x11, y11, s11);
		//11
		int x12 = 21; int y12 = 12; string s12 = "beevillee";
		city city12(x12, y12, s12);
		//12
		int x13 = 19; int y13 = 16; string s13 = "brownsville";
		city city13(x13, y13, s13);
		//13
		city cities[13];
		cities[0] = city1;
		cities[1] = city2;
		cities[2] = city3;
		cities[3] = city4;
		cities[4] = city5;
		cities[5] = city6;
		cities[6] = city7;
		cities[7] = city8;
		cities[8] = city9;
		cities[9] = city10;
		cities[10] = city11;
		cities[11] = city12;
		cities[12] = city13;
		int *a;
		int n, m, i, mod, z, j, el, min, N;
		mod = 0;
		min = INT_MAX;
		N = 0;
		m = 50;
		n = 150;
		//int *c = new int[n];
		a = (int*)malloc(m*n * sizeof(int));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				
				*(a + i * n + j) = 0;
				
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{

				for (int k = 0; k < 12; k++)
				{
					if (cities[k].ishere(j, i))
					{
						*(a + i * n + j) = 1;
					}

				}

			}
		}
		/*for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (*(a + i * n + j) == min)
				{
					N++;
					c[N] = j;
				}
			}
		}*/
		/*for (int i = 1; i <= N; i++)
		{
			cout << "J=" << c[i] << endl;
		}
		for (int z = 1; z <= N; z++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = c[z] - z + 1; j < n - 1; j++)
				{
					*(a + i * n + j) = *(a + i * n + j + 1);
				}
			}
		}*/
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << *(a + i * n + j);
			}
			cout << endl;
		}
		free(a);
	}
	~map() { 
	
	}

};


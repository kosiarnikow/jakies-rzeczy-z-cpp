﻿#include <iostream>
#include <math.h>


using namespace std;

int x = 0;
int tab[10][10];

int main()
{


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j) {

				tab[i][j] = x;
				x = x + 1;
			}

			else {
				tab[i][j] = 0;
			}

			cout << tab[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
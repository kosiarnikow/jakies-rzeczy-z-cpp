﻿#include<iostream>
using namespace std;

int x;

int main()
{

	int tab[2][2];

	cout << "podaj x:" << endl;
	cin >> x;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			tab[i][j] = x;

			cout << tab[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
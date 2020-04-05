#pragma once
#include "Helper.h"

void WrongSubtraction()
{
	int n, k;
	cin >> n >> k;

	for(auto i = 0; i != k; ++i)
	{
		if (n % 10 == 0) n /= 10;
		else n--;
	}
	cout << n;
}
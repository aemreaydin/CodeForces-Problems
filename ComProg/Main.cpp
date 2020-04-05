#include "Helper.h"

#include "977A_WrongSubtraction.h"

int main()
{
	int n, k;
	cin >> n >> k;

	for (auto i = 0; i != k; ++i)
	{
		if (n % 10 == 0) n /= 10;
		else n--;
	}
	cout << n;
	
	return 0;
}
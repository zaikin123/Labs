#include <iostream>

using namespace std;


 void real(int m)
{
	int i, j, s, l;
	for (i = 2; i < m; i++)
	{
		s = 0;
		for (j = 1; j < i; j++)
			if (i%j == 0)
				s += j;
		if (s == i)
			cout << i << '\n';

	}
}


int main()
{
	int m;
	cin >> m;
	real(m);
}

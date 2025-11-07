#include <iostream>

using namespace std;

void CalculateBag(int n, int& total);

int main()
{
	int input_n, total;
	cin >> input_n;
	CalculateBag(input_n, total);
	cout << total;
	return 0;
}

void CalculateBag(int n, int& total)
{
	int tmp, tmp_t2, tmp_f2;
	tmp_f2 = n / 5;
	total = -1;
	while (tmp_f2 >= 0)
	{
		int remainder = n - (tmp_f2 * 5);
		if (remainder % 3 == 0)
		{
			int tmp_t2 = remainder / 3;
			total = tmp_t2 + tmp_f2;
			break;
		}
		tmp_f2--;
	}
}
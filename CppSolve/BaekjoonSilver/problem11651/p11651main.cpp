#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Cooldinates
{
	int x_pos;
	int y_pos;
};

void sorting(vector<Cooldinates> v)
{
	stable_sort(v.begin(), v.end(),
		[](const Cooldinates& a, const Cooldinates& b)
		{
			if (a.y_pos == b.y_pos)
			{
				return a.x_pos < b.x_pos;
			}
			else
			{
				return a.y_pos < b.y_pos;
			}
		}
		);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].x_pos << " " << v[i].y_pos << "\n";
	}
}

int main()
{
	int iter_n, input_x, input_y;
	vector<Cooldinates> pos_v;
	Cooldinates input;
	
	cin >> iter_n;
	for (int i = 0; i < iter_n;i++)
	{
		cin >> input_x >> input_y;
		input.x_pos = input_x;
		input.y_pos = input_y;
		pos_v.push_back(input);
	}
	sorting(pos_v);

	return 0;
}
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
			if (a.x_pos == b.x_pos)
			{
				return a.y_pos < b.y_pos;
			}
			else
			{
				return a.x_pos < b.x_pos;
			}
		}
	);
	for (int i = 0; i < v.size();i++)
	{
		cout << v[i].x_pos << " " << v[i].y_pos << "\n";
	}
}

int main()
{
	int number_of_iteration, input_x, input_y;
	cin >> number_of_iteration;
	vector<Cooldinates> pos_vector;
	Cooldinates input_pos;
	for (int i = 0; i < number_of_iteration;i++)
	{
		cin >> input_x >> input_y;
		input_pos.x_pos = input_x;
		input_pos.y_pos = input_y;
		pos_vector.push_back(input_pos);
	}
	sorting(pos_vector);

	return 0;
}
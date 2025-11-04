#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int list_size_n, amount_n, input1, input2;
	vector<int> array_v, num_v;

	cin >> list_size_n;
	unordered_set<int> set_n;
	for (int i = 0; i < list_size_n;i++)
	{
		cin >> input1;
		set_n.insert(input1);
	}
	cin >> amount_n;
	for (int j = 0;j < amount_n;j++)
	{
		cin >> input2;
		num_v.push_back(input2);
	}
	for (int k = 0;k < num_v.size();k++)
	{
		if (set_n.find(num_v[k]) != set_n.end())
		{
			cout << 1 << "\n";
		}
		else
		{
			cout << 0 << "\n";
		}
	}

	return 0;
}
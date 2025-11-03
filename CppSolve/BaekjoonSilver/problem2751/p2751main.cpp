#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int number_of_iteration, input;
	cin >> number_of_iteration;
	vector<int> input_vector;
	for (int i = 0; i < number_of_iteration;i++)
	{
		cin >> input;
		input_vector.push_back(input);
	}
	sort(input_vector.begin(), input_vector.end());
	for (int j = 0; j < input_vector.size();j++)
	{
		cout << input_vector[j] << "\n";
	}
	return 0;
}

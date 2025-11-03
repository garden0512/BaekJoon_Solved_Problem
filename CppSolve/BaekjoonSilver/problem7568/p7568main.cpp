#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int input_weight, input_height, number_of_iteration;
	int rank = 1;
	cin >> number_of_iteration;
	vector<int> student_weight, student_height;
	for (int i = 0; i < number_of_iteration; i++)
	{
		cin >> input_weight >> input_height;
		student_weight.push_back(input_weight);
		student_height.push_back(input_height);
	}
	for (int ii = 0; ii < number_of_iteration; ii++)
	{
		for (int iii = 0; iii < number_of_iteration; iii++)
		{
			if ((student_weight[ii] < student_weight[iii]) && (student_height[ii] < student_height[iii]))
			{
				rank++;
			}
		}
		cout << rank << " ";
		rank = 1;
	}
	return 0;
}
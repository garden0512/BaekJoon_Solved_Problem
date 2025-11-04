#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct StudentInfo
{
	int age;
	string name;
};

void sorting(vector<StudentInfo> v)
{
	stable_sort(v.begin(), v.end(),
		[](const StudentInfo& a, const StudentInfo& b)
		{
			return a.age < b.age;
		}
	);
	for (int i = 0; i < v.size();i++)
	{
		cout << v[i].age << " " << v[i].name << "\n";
	}
}

int main()
{
	int number_of_iteration;
	cin >> number_of_iteration;
	vector<StudentInfo> info_vector;
	int input_age;
	string input_name;
	StudentInfo input_info;
	for (int i = 0; i < number_of_iteration;i++)
	{
		cin >> input_age >> input_name;
		input_info.age = input_age;
		input_info.name = input_name;
		info_vector.push_back(input_info);
	}
	sorting(info_vector);

	return 0;
}
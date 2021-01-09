#include "std_lib_facilities.h"

/*
 *Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route.
 *Compute and print the total distance (the sum of all distances).
 *Find and print the smallest and greatest distance between two neighboring cities.
 * Find and print the mean distance between two neighboring cities.
 */

void four_three()
{

	vector<double> seq_of_num;
	for (double i; std::cin >> i;)
	{
		seq_of_num.push_back(i);
	}
	
	auto sum = 0;
	for (auto i : seq_of_num)
	{
		sum = sum + i;
	}

	sort(seq_of_num);
	
	cout << "Total distance: " << sum << '\n';
	cout << "The smallest distance between two neighboring cities: " << seq_of_num[0] << '\n';
	cout << "The greatest distance between two neighboring cities: " << seq_of_num[seq_of_num.size() - 1] << '\n';
	cout << "The mean distance between two neighboring cities: " << sum / seq_of_num.size() << '\n';
	return;
}

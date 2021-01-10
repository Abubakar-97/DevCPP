#include "std_lib_facilities.h"


void four_two()
{
	vector<int> seq_of_num;
	for (int i; std::cin >> i;)
	{
		seq_of_num.push_back(i);
	}
	auto sum = 0;
	for (auto i : seq_of_num)
	{
		sum = sum + i;
	}

	std::cout << "Average Num: " << sum / seq_of_num.size() << std::endl;
	// If n is odd then Median (M) = value of ((n + 1)/2)th item term.
	// If n is even then Median (M) = value of [((n)/2)th item term + ((n)/2 + 1)th item term ]/2
	const auto numOfElement = seq_of_num.size() % 2;
	sort(seq_of_num);
	if (numOfElement == 1)
	{
		std::cout << "Median Num is: " << seq_of_num[seq_of_num.size() / 2] << std::endl;
	}
	else
	{
		std::cout << "Median Num is: " << (seq_of_num[seq_of_num.size() / 2] + seq_of_num[seq_of_num.size() / 2 - 1]) / 2 <<std::endl;
	}
}

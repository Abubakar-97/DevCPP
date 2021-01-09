#include "std_lib_facilities.h"

void LoopTryThis(int charNumFinish)
{
	int charNumStart = 97;
	while(charNumStart < charNumFinish)
	{
		std::cout << (char)charNumStart << charNumStart << std::endl;
		charNumStart++;
	}
	std::cin.get();
	return;
}

void TrythisForLoop(int charNumFinish)
{
	
	for(int charNumStart = 65; charNumStart<charNumFinish; charNumStart++)
	{
		if(charNumStart >90 && charNumStart<97)
		{
			continue;
		}
		std::cout << (char)charNumStart << charNumStart << std::endl;
	}
	return;
}

void TryThisSqureFunction(int num)
{
	int result = 0;
	for(int i=1; i<=num; i++)
	{
		result = result + num;
	}
	std::cout << std::endl << result;
	return;
}


void TryThisVectorString()
{
	vector<std::string> words;
	for(std::string temp; std::cin>>temp;)
	{
		words.push_back(temp);
	}
	std::cout << "Number of words: " << words.size() << std::endl;

	for(int i=0; i<words.size(); ++i)
	{
		if (i==0 || words[i-1]!=words[i])
		{
			if(words[i]=="hell")
			{
				std::cout << "BLEEP\n";
				i++;
			}
			std::cout << words[i] << "\n";
		}
		
	}
	return;
}



void FourTwo()
{
	vector<int>seqOfNum;
	for(int i; std::cin>>i;)
	{
		seqOfNum.push_back(i);
	}
	int sum=0;
	for(int i : seqOfNum)
	{
		sum = sum + i;
	}

	std::cout << "Average Num: " << sum / seqOfNum.size()<<std::endl;
	// If n is odd then Median (M) = value of ((n + 1)/2)th item term.
	// If n is even then Median (M) = value of [((n)/2)th item term + ((n)/2 + 1)th item term ]/2
	int numOfElement = seqOfNum.size() % 2;
	sort(seqOfNum);
	if(numOfElement == 1)
	{
		std::cout << "Median Num is: " << seqOfNum[seqOfNum.size() / 2] << std::endl;
	}
	else
	{
		std::cout << "Median Num is: " << (seqOfNum[seqOfNum.size() / 2] + seqOfNum[seqOfNum.size() / 2 - 1]) / 2 << std::endl;
	}
	return;
}


void FourThree()
{

	return;
}
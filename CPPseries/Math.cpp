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
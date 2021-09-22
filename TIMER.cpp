#include<iostream>
#include<ctime>
int main()
{
	int timeN = time(0);
	int timeP = timeN;
	for (int i = 0; i < 10000000000; ++i)
	{
		timeN = time(0);
		if (timeN != timeP)
		{
			std::cout << timeN << std::endl;
			timeP = timeN;
		}
		
	}
}
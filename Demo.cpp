#include <iostream>
int cout0()
{
	std::cout<<"0"<<std::endl;
}
int cout1()
{
	std::cout<<"1"<<std::endl;
}
int mainA(int input)
{
	int(*function)();
	
	
	if (input == 0)
		function = cout0;
	else 
		function = cout1;
	function();
}
int main()
{
	mainA(0);
	mainA(1);
	return 0;
}

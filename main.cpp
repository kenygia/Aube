#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	while(argc <= 0)
	{
		cout << argv[argc] << endl;
		argc = argc - 1;
	}
	
	return (0);
}

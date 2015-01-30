#include <vector>
#include <complex>
#include <iostream>
#include <string>

using namespace std;

void example_1(void)
{
	int values[] { 1, 2, 3 };
	vector<int> v{ 2, 3, 5, 7, 11, 13, 17 };
	vector<string> cities{
		"Berlin", "New York", "London", "Braunschweig", "Cairo", "Cologne"
	};
	complex<double> c{ 4.0, 3.0 }; // equivalent to c(4.0,3.0);


	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "values : " << *values+i << " ";
	}	

	std::cout << endl;

	typedef std::vector<int>::iterator myit;
	for (myit it = v.begin(); it != v.end(); it++)
	{
		std::cout << "values : " << *it << " ";
	}

	std::cout << endl;

	typedef std::vector<string>::iterator myits;
	for (myits it = cities.begin(); it != cities.end(); it++)
	{
		std::cout << "city : " << *it << " ";
	}
	
	std::cout << endl;
	std::cout << "complex : " << c << endl;

}

int main()
{
	example_1();
}
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

class P
{
public:
	P(int a, int b) {
		std::cout << "in the simple constructor of P ";
		std::cout << endl;
	}
	explicit P(int a, int b, int c) {
		std::cout << "explicit list initializer constructor of P ";
		std::cout << endl;
	}
};

void example_2()
{
	P x(77, 5); // OK
	P y{ 77, 5 }; // OK
	P z{ 77, 5, 42 }; // OK
	P v = { 77, 5 }; // OK (implicit type conversion allowed)
	//P w = { 77, 5, 42 }; // ERROR due to explicit (no implicit type conversion allowed)
}

void fp(const P&)
{
	std::cout << "in void fp(const P&)" << endl;
}

void example_3()
{
	fp({ 47, 11 }); // OK, implicit conversion of {47,11} into P
	//fp({ 47, 11, 3 }); // ERROR due to explicit
	fp(P{ 47, 11 }); // OK, explicit conversion of {47,11} into P
	fp(P{ 47, 11, 3 }); // OK, explicit conversion of {47,11,3} into P
}

int main()
{
	//example_1();
	//example_2();
	example_3();
}
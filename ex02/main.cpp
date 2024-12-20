#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Array.hpp"
#include "Array.tpp"

// TEST COMPLEXE TYPE

// struct Person {
//     std::string	name;
//     int			age;
// };

// static void	testComplexe() {
// 	Array<Person> p(5);

// 	for (int i = 0; i < 5; i++)
//     {
//         const int value = rand();
// 		p[i].name = "Teddy";
//         p[i].age = value % 100;
//     }
// 	{
//         Array<Person> tmp = p;
//         Array<Person> test(tmp);
//     }
// 	try {
// 		for (int i = 0; i < 5; i++) {
// 			std::cout << "Name: " << p[i].name << ", age: " << p[i].age << "." << std::endl;
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	try
// 	{
// 		Array<Person> test(p);
// 		std::cout << "size: " << test.size() << std::endl;
// 		std::cout << "first element: " << test[0].name << ", " << test[0].age << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

// TEST COMPLEXE TYPE

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
	// testComplexe();
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-4294967] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " Out -2." << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " Out + 1." << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

	// Test for empty array

	try
	{
		Array<int> test(0);
		std::cout << "size: " << test.size() << std::endl;
		std::cout << "first element: " << test[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " Empty array." << '\n';
	}
    delete [] mirror;
    return 0;
}
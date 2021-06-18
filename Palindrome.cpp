
#include <ostream>
#include <istream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "God.h"
#include "vector.h"
#include "vector.cpp"

using std::ofstream;
using std::ifstream;
using std::cin;
using std::cout;
using std::string;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::sort;



bool is_palindrome(const char* ptr);

int main()
{

	bool s = is_palindrome("tot"); 

	if (s)
		cout << "it is palindrome";
	else
		cout << "it is not palindrome";
	return 0;

}

bool is_palindrome(const char* ptr)
{

	string pallindrom;
	const char* old_string = ptr;
	const char* dum_ptr = ptr;
	int ptr_counter = 0;
	int same_latters_counter = 0;

	while (*dum_ptr != '\0')
	{

		ptr_counter++;					// i  found out the size of the ptr
		dum_ptr++;

	}

	for(int i = ptr_counter-1; i>=0; i--)
	{
		pallindrom = pallindrom + *(ptr + i);		// i create the string backward e.g home -> emoh

	}


	
	for (int j = 0; j < ptr_counter; j++)
	{
		if (pallindrom[j] == old_string[j])			// i compare the old string with the new backward string
			same_latters_counter++;
	}


	if (same_latters_counter == ptr_counter)

		return true;									

	else
		return false;

}
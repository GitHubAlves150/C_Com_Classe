// C++ Program to get the environment variable
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	// Variable storing the environment variable name
	char* env_variable = "PATH";

	// This variable would store the return value of getenv
	// function
	char* value;

	// Calling the getenv function, and storing the return
	// value
	value = getenv(env_variable);

	// if executes if a non null value is returned
	// otherwise else executes
	if (value != NULL) {
		// Displaying the variable name along with its value
		cout << "Variable = " << env_variable
			<< "\nValue= " << value;
	}
	else
		cout << "Variable doesn't exist!" << value;

	return 0;
}

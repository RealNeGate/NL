#include "Print.h"

int main() {
  	nl_print(
  		"Hello, ", "Bob", "!\n",
   		"Here's an integer: ", 6 * 4, ", Now a float: ", 5.0, ".\n",
   		"You know I'm balling ", "Usually like kobe", "\n"
   	);
	
	char buffer[16];
	nl_sprint(buffer, 16, (void*)buffer);
	nl_print(buffer);
	
	return 0;
}
#define NL_PRINT_IMPL
#include "Print.h"

int main() {
    nl_print("Hello, ", "Bob", "!\n", "Here's an integer: ", 6 * 4, ", Now a float: ", 5.0, ".\n",
        "You know I'm balling ", "Usually like kobe", "\n");

    int counter = 69420;

    nl_print("The number is ", nl_intfmt(counter, 8 /* width */, 16 /* base */, true /* zeroes */),
        "\n");

    char buffer[20];
    if (nl_sprint(buffer, 20, (void*)buffer) >= 0) {
        nl_print(buffer);
    } else {
        nl_print("Buffer overflow!\n");
    }

    return 0;
}

//Print your name

/* //primitive code

#include <iostream>
using namespace std;

int main(){
    cout << "Amr sal" << endl;
    return 0;
}
    */
   
    //more advanced code
#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: PrintName
// Purpose: Prints a message displaying the given name.
// Parameter: Name - a string containing the name to be displayed.
void PrintName(string Name)
{
    // Print the name with a message, adding a newline before for formatting.
    cout << "\n Your Name is: " << Name << endl;
}

// Main function: Program entry point.
int main()
{
    system("cls");
    // Call the PrintName function, passing "Mohammed" as the argument.
    // This will display: "Your Name is: Mohammed"
    PrintName("Mohammed");

    return 0;  // Return 0 to indicate successful execution.
}
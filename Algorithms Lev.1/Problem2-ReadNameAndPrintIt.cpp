#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadName
// Purpose: Prompts the user to enter their name and reads it from the input.
// Returns: A string containing the user's entered name.
string ReadName()
{
    string Name;  // Declare a string variable to store the user's name.

    // Prompt the user to enter their name.
    cout << "Please enter your name? " << endl;

    // Use getline to read the full name, including spaces.
    getline(cin, Name);

    return Name;  // Return the entered name.
}

// Function: PrintName
// Purpose: Displays the entered name with a formatted message.
// Parameter: Name - a string containing the name to be displayed.
void PrintName(string Name)
{
    // Print the name with a message, adding a newline before for formatting.
    cout << "\n Your Name is: " << Name << endl;
}

// Main function: Program entry point.
int main()
{
    // Clear terminal result.
    system("cls");
    // Call the PrintName function, passing "Mohammed" as the argument.
    // This will display: "Your Name is: Mohammed"
    PrintName(ReadName());

    return 0;  // Return 0 to indicate successful execution.
}
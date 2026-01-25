// str_quote.cpp -- different designs
#include <iostream>
#include <string>

using namespace std;

string version1 (const string &str1, const string &str2)
{
    string temp;
    temp = str2 + str1 + str2;
    
    return temp;
}

const string & version2 (string &str1, const string &str2)
{
    str1 = str2 + str1 + str2;
    
// safe to return reference passed to function
    return str1;
}

const string & version3 (string &str1, const string &str2)  // bad design
{
    string temp;

    temp = str2 + str1 + str2;

// unsafe to return reference to local variable
    return temp;
}

int main()
{
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline (cin, input);
    copy = input;
    cout << "Your string as entered: " << input << endl;

    result = version1 (input, "*** ");
    cout << "Your string enhaced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version2 (copy, "### ");
    cout << "Your string enhaced: " << result << endl;
    cout << "Your original string: " << copy << endl;

    cout << "Resetting orginal string.\n";
    input = copy;
    result = version3 (input, "@@@ ");
    cout << "Your string enhaced: " << result << endl;
    cout << "Your original string: " << input << endl;

    return 0;
}

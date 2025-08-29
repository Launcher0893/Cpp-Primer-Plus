#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string line;
    int word_count = 0;
    
    cout << "Enter words (to stop, type the word done):\n";
    
    while (getline(cin, line))
    {
        if (line == "done")
            break;
            
        int pos = 0;
        string word;
        bool found_done = false;
        
        while (pos < line.length())
        {
            while (pos < line.length() && (line[pos] == ' ' || line[pos] == '\t'))
                pos++;
                
            if (pos >= line.length())
                break;
                
            word = "";
            while (pos < line.length() && line[pos] != ' ' && line[pos] != '\t')
            {
                word += line[pos];
                pos++;
            }
            
            if (word == "done")
            {
                found_done = true;
                break;
            }
            
            word_count++;
        }
        
        if (found_done)
            break;
    }
    
    cout << "You entered a total of " << word_count << " words.\n";
    return 0;
}

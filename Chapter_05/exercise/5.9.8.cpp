#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char words[100];
    int word_count = 0;
    
    cout << "Enter words (to stop, type the word done):\n";
    
    while (cin.getline(words, 100))
    {
        if (strcmp(words, "done") == 0)
            break;
            
        char* ptr = words;
        char word[50];
        int word_len = 0;
        bool found_done = false;
        
        while (*ptr != '\0')
        {
            while (*ptr == ' ' || *ptr == '\t')
                ptr++;
                
            if (*ptr == '\0')
                break;
                
            word_len = 0;
            while (*ptr != ' ' && *ptr != '\t' && *ptr != '\0')
            {
                word[word_len++] = *ptr++;
            }
            word[word_len] = '\0';
            
            if (strcmp(word, "done") == 0)
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

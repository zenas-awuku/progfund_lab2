#include <iostream>
#include <cstring>

using namespace std;

void print_word(char hyphen_string[], int first_char, int last_char)
{
    cout << "[" << last_char-first_char+1 << "] ";
    for (int i = first_char; i <= last_char; i++)
    {
        cout << hyphen_string[i];
    }
    cout << endl;
}


int main()
{
    cout << "Enter word: ";
    char hyphen_string[256];
    cin >> hyphen_string;
    // cout << hyphen_string << endl;

    int previous_hyphen = -1;
    for (int i = 0; i < 256; i++)
    {
        if (hyphen_string[i] == '-' || hyphen_string[i] == '\0')
        {
            print_word(hyphen_string, previous_hyphen + 1, i-1);
            previous_hyphen = i;
        }
        if (hyphen_string[i] == '\0')
        {

            break;
        }
    }
}
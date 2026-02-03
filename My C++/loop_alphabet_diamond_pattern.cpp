#include <iostream>
using namespace std;
int main()
{

    // To print an alphabet diamond pattern based on user-defined n

    int n = 10; // given number of rows
    // To print an alphabet diamond pattern based on user-defined n
    // Upper half of the diamond
    for (int line = 1; line <= n; line++)
    {
        // this loop does some work for each line
        // printing spaces
        int no_of_spaces = n - line;
        for (int s = 0; s <= no_of_spaces; s++)
        {
            cout << " ";
        }
        // to print char for each line
        int no_of_chars = 2 * line - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            char ch = 'A' + j;
            cout << ch;
        }
        cout << endl;
    }
    // Lower half of the diamond
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int no_of_spaces = line - n;
        for (int s = 0; s <= no_of_spaces; s++)
        {
            cout << " ";
        }
        int no_of_chars = 2 * (2 * n - line) - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            char ch = 'A' + j;
            cout << ch;
        }
        cout << endl;
    }
}
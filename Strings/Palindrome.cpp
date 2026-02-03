#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char a[x];
    int j = 0;
    char b[x];
    cin.getline(a, x);
    int i;
    for (i = (strlen(a)) - 1; i > 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    b[j]='\0';
    if (strcmp(a, b) == 0)
    {
        cout << "String is palindrome." << endl;
    }
    else
    {
        cout << "String is not palindrome";
    }
}
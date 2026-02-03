#include <iostream>
using namespace std;
int main()
{

    // To check whether a given alphabet is a vowel or consonant using switch case

    char alphabet;
    cout << "Enter an alphabet:";
    cin >> alphabet;
    switch (alphabet)
    {
    case 'a':
        cout << "It is a vowel" << endl;
        break;
    case 'e':
        cout << "It is a vowel" << endl;
        break;
    case 'i':
        cout << "It is a vowel" << endl;
        break;
    case 'o':
        cout << "It is a vowel" << endl;
        break;
    case 'u':
        cout << "It is a vowel" << endl;
        break;
    default:
        cout << "It is a consonent" << endl;
        break;
        return 0;
    }
}

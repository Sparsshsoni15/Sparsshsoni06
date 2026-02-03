#include <iostream>
using namespace std;
int main()
{

    // To demonstrate the use of if-else-if ladder to evaluate performance based on score

    int score;
    cout << "Enter Score:";
    cin >> score;
    // score>80, print Well Done
    // score=50-80, print Can Improve
    // score<50, print Poor Performance
    if (score > 80)
    {
        cout << "Well Done" << endl;
    }
    else if (score > 50)
    {
        cout << "Can Improve" << endl;
    }
    else
    {
        cout << "Poor Performance" << endl;
    }
    return 0;
}
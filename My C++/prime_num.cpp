#include <iostream>
using namespace std;
int main()
{

    // To print all prime numbers up to N

    int N;
    cout << "Enter the value of N:";
    cin >> N;
    cout << "Prime numbers up to " << N << " are:" << endl;
    for (int num = 2; num <= N; num++)
    {
        bool isPrime = true;

        // check if num is Prime
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << num << " ";
        }
    }
    return 0;
}
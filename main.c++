#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    const int secretTarget = 42;
    int guess = 0;
    int attempts = 0;
    cout << " welcome to the guessing game! " << endl;

    while (guess != secretTarget)
    {
        cout << "enter guess number: ";
        cin >> guess;
        attempts++;

        if (guess > secretTarget)
        {
            cout << " Too High! ";
        }

        else if (guess < secretTarget)
        {
            cout << " Too Low! ";
        }
    }

    // thanks for playing message
//   cout << " Thanks for playing! " << endl;
    // victory message ( Runs only after the loop ends)
    cout << " Congratulation! You found it in " << attempts << " attempts!" << endl;

    return 0;
}

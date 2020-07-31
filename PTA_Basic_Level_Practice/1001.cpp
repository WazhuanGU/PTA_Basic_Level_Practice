#include <iostream>
using namespace std;

int main()
{
    int Step = 0;
    int Number = 0;
    cin >> Number;

    while (Number != 1) {
        if (Number % 2 == 0)
            Number = Number / 2;
        else
            Number = (3 * Number + 1) / 2;
        Step = Step + 1;
    }
    cout << Step;
}
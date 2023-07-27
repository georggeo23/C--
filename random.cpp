#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const short maxvalue = 6;
    const short minvalue = 1;
    short FirstDice = (rand() % (maxvalue - minvalue + 1)) + minvalue;
    short SecondDice = (rand() % (maxvalue - minvalue + 1)) + minvalue;
    cout << FirstDice << ", " << SecondDice << endl;
    return 0;
}
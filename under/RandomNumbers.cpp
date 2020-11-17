#include <iostream>
#include <random>
using namespace std;

void randomNumbers()
{
    random_device rd;
    mt19937_64 mersenne_twister_engine(rd());
    uniform_int_distribution <> dice(1,12);
    // 
    for (int i = 0; i <= 10; i++)
    {
        cout << "random dice : " << dice(mersenne_twister_engine) << endl;
    }
    
}
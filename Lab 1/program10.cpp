#include <iostream>
#include <thread>

using namespace std;

void printNumbers(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    thread t1(printNumbers, n);

    t1.join();

    return 0;
}
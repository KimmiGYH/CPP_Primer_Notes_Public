#include <iostream>

using namespace std;

void add(int a)
{
    auto sum = [a] (int b) { return a + b; };

    cout << sum(1) << endl;
}

int main(int argc, char *argv[])
{
    add(1); //输出 2
    add(2); //输出 3

    return 0;
}
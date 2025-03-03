#include <iostream>

#include "Counter.h";

using namespace std;


int main()

{
    std::cout << "Hello World!\n";
    // Instantiate class
    Counter c(10);

    c.setCounter(99);

    c.increment();
    c.increment();
    c.decrement();
    c.increment();



    int result = c.getCounter();

    cout << result << endl;

    if (result > 1) {
        ;
    }
}

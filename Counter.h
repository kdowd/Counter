#pragma once

#include <iostream>
#include <string>

class Counter {
    // private accessor 
private:
    int counter{};

public:
    Counter(int);

    void increment();

    void decrement();

    // getter
    int getCounter();

    void setCounter(int);

};

#include "Counter.h"

using namespace std;

Counter::Counter(int n) {
    counter = n;
    cout << "counter = " << counter << endl;
}


void Counter::increment() {
    counter++;
}

void Counter::decrement() {
    if (counter > 0) {
        counter--;
    }
}

int Counter::getCounter() {
    return counter;
}
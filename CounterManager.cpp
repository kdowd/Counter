#include "Counter.h"

using namespace std;

Counter::Counter(int n) {
    setCounter(n);
   
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

void Counter::setCounter(int n) {

    counter = n;
}
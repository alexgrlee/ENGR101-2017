#include <stdio.h>
#include <time.h>
#include "E101.h"

int average(){
    for (int i = 0; i < 5; ++i) {
        average += read_analog(0);
    }
    average /= 5;
    return average;
}

int main(){
    init();
    return 0;
}

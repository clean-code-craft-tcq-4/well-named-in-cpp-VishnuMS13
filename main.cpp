#include <iostream>
#include <assert.h>
#include "TelCoColorCoder.h"
using namespace TelCoColorCoder;


int main() {
    ColorCoder colorCoder;
    colorCoder.testNumberToPair(4, WHITE, BROWN);
    colorCoder.testNumberToPair(5, WHITE, SLATE);

    colorCoder.testPairToNumber(BLACK, ORANGE, 12);
    colorCoder.testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}

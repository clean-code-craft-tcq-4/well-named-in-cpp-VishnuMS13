#include <iostream>
#include <assert.h>
#include "ColorPair.h"
#include "TelCoColorCoder.h"
#include "main.h"

int main() {
    TelCoColorCoder m_telCoColorCoder;
    
    m_telCoColorCoder.testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    m_telCoColorCoder.testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    m_telCoColorCoder.testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    m_telCoColorCoder.testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}

class ColorPair;

class TelCoColorCoder
{
public:
    TelCoColorCoder();
    ColorPair m_ColorPair;
    void testNumberToPair(int pairNumber, ColorPair::MajorColor expectedMajor,
                        ColorPair::MinorColor expectedMinor);
    void testPairToNumber(ColorPair::MajorColor major, ColorPair::MinorColor minor,
                        int expectedPairNumber);
private:
    
};
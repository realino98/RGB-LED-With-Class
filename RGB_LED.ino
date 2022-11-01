// C++ code
//

class RGBLed
{
private:
    int _rpin;
    int _gpin;
    int _bpin;
    int _r;
    int _g;
    int _b;

public:
    void RgbLed(int rpin, int gpin, int bpin, int r, int g, int b)
    {
        this->_rpin = rpin;
        this->_gpin = gpin;
        this->_bpin = bpin;
        this->_r = r;
        this->_g = g;
        this->_b = b;
        digitalWrite(_rpin, _r);
        digitalWrite(_gpin, _g);
        digitalWrite(_bpin, _b);
    }
    // void RgbLed(int rpin, int gpin, int bpin);
    void setRgb(int r, int g, int b){
        this->_r = r;
        this->_g = g;
        this->_b = b;
        digitalWrite(_rpin, _r);
        digitalWrite(_gpin, _g);
        digitalWrite(_bpin, _b);
    }
    void setRed(int r){
        this->_r = r;
        digitalWrite(_rpin, _r);
    }
    const int getRed(){
        Serial.println("Red   : ");
        Serial.println(_r);
    }
    void setGreen(int g){
        this->_g = g;
        digitalWrite(_gpin, _g);
    }
    const int getGreen(){
        Serial.println("Green : ");
        Serial.println(_g);
    }
    void setBlue(int b){
        this->_b = b;
        digitalWrite(_bpin, _b);
    }
    const int getBlue(){
        Serial.println("Blue  : ");
        Serial.println(_b);
    }
};

#define RED_PIN 5
#define GREEN_PIN 6
#define BLUE_PIN 3

RGBLed led;
void setup()
{
    Serial.begin(115200);
    led.RgbLed(RED_PIN, GREEN_PIN, BLUE_PIN, 255, 255, 255);
}

void loop()
{

    printf("Set RGB");
    led.setRgb(255, 0, 0);
    delay(1000);
    led.setRgb(0, 255, 0);
    delay(1000);
    led.setRgb(0, 0, 255);
    delay(1000);
    led.getRed();
    led.getGreen();
    led.getBlue();
}
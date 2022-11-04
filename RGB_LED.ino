// Quiz C++ RGB LED

#define RED_PIN 6
#define GREEN_PIN 3
#define BLUE_PIN 5
class RGBLed
{
private:
    int _rpin;
    int _gpin;
    int _bpin;
    int _r;
    int _g;
    int _b;
    int delay_ms = 5;
public:
    void RgbLed(int rpin, int gpin, int bpin, int r, int g, int b)
    {
        this->_rpin = rpin;
        this->_gpin = gpin;
        this->_bpin = bpin;
        this->_r = r;
        this->_g = g;
        this->_b = b;
        analogWrite(_rpin, _r);
        analogWrite(_gpin, _g);
        analogWrite(_bpin, _b);
    }
    // void RgbLed(int rpin, int gpin, int bpin);
    
    void setRgb(int r, int g, int b){
        this->_r = r;
        this->_g = g;
        this->_b = b;
        analogWrite(_rpin, _r);
        analogWrite(_gpin, _g);
        analogWrite(_bpin, _b);
    }
    void setRed(int r){
        this->_r = r;
        analogWrite(_rpin, _r);
        delay(delay_ms);
    }
    const int getRed(){
        Serial.print("Red   : ");
        Serial.println(_r);
    }
    void setGreen(int g){
        this->_g = g;
        analogWrite(_gpin, _g);
        delay(delay_ms);
    }
    const int getGreen(){
        Serial.print("Green : ");
        Serial.println(_g);
    }
    void setBlue(int b){
        this->_b = b;
        analogWrite(_bpin, _b);
        delay(delay_ms);
    }
    const int getBlue(){
        Serial.print("Blue  : ");
        Serial.println(_b);
    }

    void animationBreating(){
        int max_brigtness = 255;
        
        for(int i=0; i<=max_brigtness; i++){
            setRed(i);
        }
        for(int i=max_brigtness; i>0; i--){
            setRed(i);
        }

        for(int i=0; i<=max_brigtness; i++){
            setGreen(i);
        }
        for(int i=max_brigtness; i>0; i--){
            setGreen(i);
        }
        for(int i=0; i<=max_brigtness; i++){
            setBlue(i);
        }
        for(int i=max_brigtness; i>0; i--){
            setBlue(i);
        }
    }
};



RGBLed led;
void setup()
{
    Serial.begin(115200);
    led.RgbLed(RED_PIN, GREEN_PIN, BLUE_PIN, 255, 255, 255);
}

void loop()
{

    // printf("Set RGB");
    // led.setRgb(255, 0, 0);
    // delay(1000);
    // led.setRgb(0, 255, 0);
    // delay(1000);
    // led.setRgb(0, 0, 255);
    // delay(1000);
    // led.getRed();
    // led.getGreen();
    // led.getBlue();
    led.animationBreating();
}
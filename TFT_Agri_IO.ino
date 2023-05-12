/*  
 Test the tft.print() viz embedded tft.write() function

 This sketch used font 2, 4, 7
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 Note that yield() or delay(0) must be called in long duration for/while
 loops to stop the ESP8266 watchdog triggering.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
 */


#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

#include <Adafruit_BME280.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h
TFT_eSprite img = TFT_eSprite(&tft); // Avoid flickering of display.

#define TFT_GREY 0x5AEB // New colour

// Size of sprite image for the scrolling text, this requires ~14 Kbytes of RAM
#define IWIDTH  128
#define IHEIGHT 160

#define COLOR1 ST7735_WHITE
#define COLOR2 ST7735_BLACK

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme; // I2C

double temp = 0.0;
double pre_temp = 0.0;

void setup(void) {
  tft.init();
  tft.setRotation(6); // 6,7,8

  tft.fillScreen(TFT_BLUE);
  
  //img.createSprite(128,40);
  Serial.begin(115200);
  bool status;
  
  // default settings
  // (you can also pass in a Wire library object like &Wire2)
  status = bme.begin(0x76);  
  if (!status) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }
  
  
  
  // Table
  tft.drawRect(0, 0, 128, 160, COLOR1);
  tft.drawLine(0, 50, 128, 50, COLOR1);
  tft.drawLine(0, 100, 128, 100, COLOR1);
  
}

void loop() {
 
  // Set colour depth of Sprite to 8 (or 16) bits
  img.setColorDepth(16);

  // Create the sprite
  img.createSprite(IWIDTH, IHEIGHT);
  
//  // Table
//  img.drawRect(0, 0, 128, 160, COLOR1);
//  img.drawLine(0, 50, 128, 50, COLOR1);
//  img.drawLine(0, 100, 128, 100, COLOR1);
  
  // Set "cursor" at top left corner of display (0,0) and select font 2
  // (cursor will move to next line automatically during printing with 'tft.println'
  //  or stay on the line is there is room for the text with tft.print)
  //tft.setCursor(0, 0, 2);
// Set the font colour to be white with a black background, set text size multiplier to 1
  //tft.setTextColor(TFT_WHITE,TFT_BLACK);  
  //tft.setTextSize(1);
  temp = bme.readTemperature();
  //temperature_to_lcd(temp, 4);
//// We can now plot text on screen using the "print" class
//  tft.println("Hey Vithusha..");
////  
////  // Set the font colour to be yellow with no background, set to font 7
//  tft.setTextColor(TFT_YELLOW); 
//  tft.setTextFont(1);
//  tft.println("I'm in love with you..");
////  
//  // Set the font colour to be red with black background, set to font 4
//  tft.setTextColor(TFT_RED,TFT_BLACK);    
//  tft.setTextFont(4);
//  tft.println((long)3735928559, HEX); // Should print DEADBEEF
//
//  // Set the font colour to be green with black background, set to font 2
//  tft.setTextColor(TFT_GREEN,TFT_BLACK);
//  tft.setTextFont(2);
//  tft.println("Groop");
//
//  // Test some print formatting functions
//  float fnumber = 123.45;
//   // Set the font colour to be blue with no background, set to font 2
//  tft.setTextColor(TFT_BLUE);    tft.setTextFont(2);
//  tft.print("Float = "); tft.println(fnumber);           // Print floating point number
//  tft.print("Binary = "); tft.println((int)fnumber, BIN); // Print as integer value in binary
//  tft.print("Hexadecimal = "); tft.println((int)fnumber, HEX); // Print as integer number in Hexadecimal
//
    img.deleteSprite();
    
    //temperature_to_lcd(temp, 4);
//  if(pre_temp != temp){
//    temperature_to_lcd(temp, 4);
//    Serial.printf("pre-value(%.1f) not same. vlaue:%.1f \n", pre_temp, temp);
//    pre_temp = temp;
//  }else{
//    Serial.println("pre-value same. - yield() ");
//    yield(); // We must yield() to stop a watchdog timeout.
//    pre_temp = temp;
//    temperature_to_lcd(temp, 4);
//  }
    tft.setCursor(4, 4);
    tft.setTextColor(COLOR1, COLOR2);
    tft.setTextSize(2);

    tft.println("Temperature:");
    img.deleteSprite();
    /*
    
    1st box -> 126x, 49y
    SpriteSize -> 62 Wide, 17 High
    x=32 => (126 - 62)/2 >>> Justify (center position)
    y=32 => 49-17 => bottom
    */
    numberBox(temp, 32, 32); // 32=> (126 - 62)/2   
    delay(300);
}

void numberBox(float num, int x, int y)
{ 
  // Create a sprite 62 pixels wide, 17 high (8kbytes of RAM needed)
  img.createSprite(62, 17);

  // Fill it with black
  img.fillSprite(TFT_BLACK);

  // Draw a backgorund of 2 filled triangles
  // img.fillTriangle(  0, 0,  0, 49, 40, 25, TFT_RED);
  // img.fillTriangle( 79, 0, 79, 49, 40, 25, TFT_DARKGREEN);

  
  
  // Set the font parameters
  img.setTextColor(COLOR1, COLOR2);
  //img.setTextSize(2);           // Font size scaling is x1
  //img.setFreeFont(&FreeSansBold12pt7b);  // Select free font
  //img.setTextColor(TFT_WHITE);  // White text, no background colour

  // Set text coordinate datum to middle centre
  img.setTextDatum(MC_DATUM);
  
  // Draw the number in middle of 126 x 49 sprite
  img.drawFloat(num, 2, 31, 11, 4); // Value, decimal, X, Y, fontsize
  
  // Push sprite to TFT screen CGRAM at coordinate x,y (top left corner)
  img.pushSprite(x, y);

  // Delete sprite to free up the RAM
  img.deleteSprite();
}

// outputs temperature to LCD

void temperature_to_lcd(float temperature, unsigned char text_position)
{
    int text_color;
    tft.setCursor(4, text_position);
    tft.setTextColor(COLOR1, COLOR2);
    tft.setTextSize(1);

    tft.print("Temperature:");
    tft.setTextSize(3);
    if (temperature > 0)
    {
        text_color = ST7735_BLUE;
    }
    else
    {
        text_color = ST7735_BLUE;
    }

    tft.setCursor(1, text_position + 20);
    fix_number_position(temperature);
    tft.setTextColor(text_color, COLOR2);
    tft.print(temperature, 1);
    tft.setCursor(108, text_position + 20);
    tft.print("C");
    tft.drawChar(90, text_position + 20, 247, text_color, COLOR2, 2); //degree symbol

}

void fix_number_position(float number){
    if ((number >= -40) && (number < -9.9)){
        ;
    }

    if ((number >= -9.9) && (number < 0.0)){
        img.print(" ");
    }

    if ((number >= 0.0) && (number < 9.9)){
        img.print(" ");
    }

    if ((number >= 9.9) && (number < 99.9)){
        img.print(" ");
    }

    if ((number >= 99.9) && (number < 151)){
        img.print("");
    }
}

//outputs humidity to LCD

void humidity_to_lcd(float humidity, unsigned char text_position)
{
    img.setTextColor(COLOR1, COLOR2);
    img.setCursor(4, text_position);
    img.setTextSize(1);
    img.println("Humidity:");
    img.setTextSize(3);
    img.setCursor(1, text_position + 20);
    fix_number_position(humidity);
    img.print(humidity, 1);
    img.print(" %");
}

// aligs number to constant position

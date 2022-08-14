/*
  Arduino Christmas Songs
  
  Based on a project and code by Dipto Pratyaksa, updated on 31/3/13

  Modified for Christmas by Joshi, on Dec 17th, 2017.
  Retuned by Hoon Seok Kim, on Aug 9th, 2022
*/
/*************************************************
 * Public Constants
 *************************************************/
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
// End of tune definition

// Tunes for the first song: Jingle Bells
int Jingle[] =
{
  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5, NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, 
  NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_G5
};
// Tempo for Jingle bells, the larger the shorter
int Jtempo[] =
{ 
  8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 2,
  8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 4, 4
};

// Tunes for the second song: Santa Claus is coming to town
int Santa[] =
{
  NOTE_G4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, 
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 
  NOTE_C5, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, 
  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,
  NOTE_D4, NOTE_F4, NOTE_B3, NOTE_C4 
};
// Tempo for Santa Claus, the larger the shorter
int Stempo[] =
{
  8, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4,
  8, 8, 4, 4, 4, 8, 8, 4, 2, 4, 4, 4, 4, 4, 2, 4, 1
};

// Tunes for the third song: We wish a Marry X-mas
int Wish[] =
{
  NOTE_B3, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4,
  NOTE_D4, NOTE_D4, 
  NOTE_D4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4,
  NOTE_E4, NOTE_E4, 
  NOTE_E4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_D4, NOTE_C4, NOTE_C4,
  NOTE_D4, NOTE_G4, NOTE_E4, NOTE_F4
};
// Tempo for Wish, the larger the shorter
int Wtempo [] =
{
  4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 
  4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 4, 2
};
//********************************************************
// digital pin setup
int melodyPin = 9;  // Send signal to Buzzer
int motorPin = 3;   // Send signal to motor
int nextPin = 2;    // Send signal to white LED(end song noti.)
int powerlowPin = 4;// Low when 1st power(by light) is on
int redPin = 10;    // RGB LED => red for mode 0 & 2
int bluePin = 13;   // RGB LED => blue for mode 1 & 2
int latchPin = 8;   // Shift register
int clockPin = 12;  // Shift register
int dataPin = 11;   // Shift register
//********************************************************
// analog pin setup
int temperPin = 0;  // Mode changer
int switchPin = 1;  // 2nd power(emergency end)
int lightPin = 2;   // 1st Power  
int volumePin = 3;  // volume sensor
// Variables**********************************************
float volume;       // write volumePin value emporarily
int mode=0;         // Initiating LED mode

// functions**********************************************
void setup()
{
  // Pin in/out definition
  pinMode(nextPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(melodyPin, OUTPUT);
  pinMode(powerlowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);   // Serial monitoring
}

// Variables to start and end system 
int endloop = 0;    // Stop loop if endloop = 1
int darksense = 0;  // start system only if darkness = 2

void loop() {
  Serial.println(analogRead(lightPin)); // monitoring light sensor value
  // If the value of lightsensor < 80 for more than 2 second,
  // set darkness = 2. => ready to start the system
  if (analogRead(lightPin) < 80 && darksense == 0)
  {
    darksense = 1;
    delay(2000);
  }
  else if (analogRead(lightPin) < 80 && darksense == 1)
  {
    darksense = 2;
  }

  // If the value of lightsensor > 120
  // the system will be reinitiated
  if (analogRead(lightPin) > 120)
  {
    darksense = 0;
    endloop = 0;
    digitalWrite(powerlowPin, HIGH);  // disable shift register
  }

  // Play song only if endloop = 0.
  // endloop becomes 1 after running playsong() once. No repeat
  if (endloop==0 && darksense == 2){
    digitalWrite(powerlowPin, LOW);   // enable shift register
    if (analogRead(switchPin) < 10)   // check push buoon
    {
      playsong();                     // Play music
      endloop = 1;                    // Prevent repeat
      darksense = 0;                  // reset darkness sensing
    }
    else
    {
      // Nothing happens
      darksense=0;                    
      endloop = 0;
    }
  }
  
}

// functions for play three melodies once
void playsong() {
  // Play 1st song
  sing(1);
  // Play 2nd song
  sing(2);
  // Play 3rd song
  sing(3);
  // turn off RGB LED, mode indicator
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
}

// Function for melody, motor and lightening
void sing(int select)
{
  Serial.println(analogRead(switchPin));
  if (select == 1 && analogRead(switchPin) < 10)
  {
    // length of song
    int size = sizeof(Jingle) / sizeof(int);
    // play song from the begining to the end.
    for (int i=0; i < size; i++){
      // Stimulate DC motor
      analogWrite(motorPin, HIGH);
      // if pushbutton was not pressed
      if (analogRead(switchPin) < 10){
        // Read controlled volume by Potentiomiters and rescales
        volume = analogRead(volumePin)/2;
        Serial.println(volume);   // monitoring volume
        // 'Volume' contols the speed of motor
        analogWrite(motorPin, volume);
        // Control buzzer for assigned melody
        buzz(melodyPin, Jingle[i], 1000 / Jtempo[i]);
        // Change LED mode according to the mode        
        ledcontrol(i, Jingle[i], 1);
        // Gap between each melody
        delay( 1300 / Jtempo[i] );
        // stop the melody;
        buzz(melodyPin, 0, 1000/Jtempo[i]);
      }
    }
    // turn off all LEDs
    ledcontrol(0,0,0);
    // notify the end of the 1st song, turn on white LED for 1 sec.
    analogWrite(motorPin, LOW);
    digitalWrite(nextPin, HIGH);
    delay(1000);
    digitalWrite(nextPin, LOW);
  }
  else if (select == 2 && analogRead(switchPin) < 10)
  {
    // length of song
    int size = sizeof(Santa) / sizeof(int);
    // play song from the begining to the end.
    for (int i=0; i < size; i++){
      // Stimulate DC motor
      analogWrite(motorPin, HIGH);
      // if pushbutton was not pressed
      if (analogRead(switchPin) < 10){
        // Read controlled volume by Potentiomiters and rescales
        volume = analogRead(volumePin)/2;
        // Volume contol the speed of motor
        analogWrite(motorPin, volume);
        // Control buzzer for assigned melody
        buzz(melodyPin, Santa[i], 1000 / Stempo[i]);
        // Change LED mode according to the mode
        ledcontrol(i, Santa[i], 1);
        // Gap between each melody
        delay( 1300 / Stempo[i] );
        // stop the melody;
        buzz(melodyPin, 0, 1000/Stempo[i]);
      }
    }
    // notify the end of the 2nd song, blink LED twice.
    ledcontrol(0,0,0);
    analogWrite(motorPin, LOW);
    digitalWrite(nextPin, HIGH);
    delay(1000);
    digitalWrite(nextPin, LOW);
    delay(500);
    digitalWrite(nextPin, HIGH);
    delay(1000);
    digitalWrite(nextPin, LOW);
  }
  else if (select == 3 && analogRead(switchPin) < 10)
  {
    // length of song
    int size = sizeof(Wish) / sizeof(int);
    // play song from the begining to the end.
    for (int i=0; i < size; i++){
      // Stimulate DC motor
      analogWrite(motorPin, HIGH);
      // if pushbutton was not pressed
      if (analogRead(switchPin) < 10){
      // Read controlled volume by Potentiomiters and rescales
        volume = analogRead(volumePin)/2;
        // Volume contol the speed of motor
        analogWrite(motorPin, volume);
        // Control buzzer for assigned melody
        buzz(melodyPin, Wish[i], 1000 / Wtempo[i]);
        // Change LED mode according to the mode
        ledcontrol(i, Wish[i], 1);
        // Gap between each melody
        delay( 1300 / Wtempo[i] );
        // stop the melody;
        buzz(melodyPin, 0, 1000/Wtempo[i]);
      }
    }
    // notify the end of the 3rd song, blink LED 3 times.
    ledcontrol(0,0,0);
    analogWrite(motorPin, LOW);
    digitalWrite(nextPin, HIGH);
    delay(1000);
    digitalWrite(nextPin, LOW);
    delay(500);
    digitalWrite(nextPin, HIGH);
    delay(1000);
    digitalWrite(nextPin, LOW);
    delay(500);
    digitalWrite(nextPin, HIGH);
    delay(1000);
    digitalWrite(nextPin, LOW);
  }
}
    
    
// Buzz function was modified vodes from
// https://create.arduino.cc/projecthub/joshi/piezo-christmas-songs-fd1ae9
void buzz(int targetPin, long frequency, long length) {
  // calculate the delay value between transitions
  long delayValue = 1000000 / frequency / 2; 

  // 1 second's worth of microseconds, divided by the frequency, then split in half since
  // there are two phases to each cycle
  // calculate the number of cycles for proper timing
  long numCycles = frequency * length / 1000;
      
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
}

// Variables for temperature monotoring
float temperprev=0.0;
float tempercur=0.0;
// ready signal for mode change
int ready;
// 8 bit data to write into shift register
byte data;

// ledcontrol funtion(shift register control)
// length => # of melody, tune => pitch of melody, active => enable
void ledcontrol(int length, float tune, bool active) {
  // 8 bits ==> shift register
  // remeber current temp to temperprev.
  temperprev = tempercur;
  
  // mode checking
  if (mode == 0 && active == 1){
    // Sequential mode: LED blinking in order
    // data = (2^(lengh+1))-1
    if (length%8 == 0)
      data = 1;
    else if (length%8 == 1)
      data = 3;
    else if (length%8 == 2)
      data = 7;
    else if (length%8 == 3)
      data = 15;
    else if (length%8 == 4)
      data = 31;
    else if (length%8 == 5)
      data = 63;
    else if (length%8 == 6)
      data = 127;
    else
      data = 255;
    // Mode 0 => RGB LED: red
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  else if (mode == 1 && active == 1){
    // Random mode: LED blinking randomly
    data = rand()%256;
    // Mode 1 => RGB LED: blue
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  else if (mode == 2 && active == 1){
    // LED blinking by tune pitch
    if (tune < 250)
      data = 0;
    else if (tune < 300)
      data = 1;
    else if (tune < 350)
      data = 3;
    else if (tune < 450)
      data = 7;
    else if (tune < 550)
      data = 15;
    else if (tune < 600)
      data = 31;
    else if (tune < 670)
      data = 63;
    else if (tune < 700)
      data = 127;
    else
      data = 255;
    // Mode 1 => RGB LED: blue
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, HIGH);
  }
  // Only 3 modes are permitted
  else{
    data = 0;
  }
  // Shift register controls
  // take the latchPin low so
  // the LEDs don't change while you're sending in bits:
  digitalWrite(latchPin, LOW);
  // shift out the bits: start from MSB
  shiftOut(dataPin, clockPin, MSBFIRST, data);
  //take the latch pin high so the LEDs will light up:
  digitalWrite(latchPin, HIGH);
  
  // check current temperature
  tempercur = ((analogRead(temperPin) * 0.004882814)-0.5)*100;
  // detect temperature increase: ready becomes 0 to 1  
  if (tempercur > temperprev+20 && ready == 0){
    ready = 1;
  }
  // detect temperature decrease: change mode and reset ready
  else if (tempercur < temperprev-20 && ready == 1){
    // if temperature goes up and down change the mode
    mode = (mode+1)%3;
    ready = 0;
  }
  // Monitoring temperature and mode
  Serial.println(temperprev);
  Serial.println(tempercur);
  Serial.println(mode);
  Serial.println(" "); 
}

    
    
    

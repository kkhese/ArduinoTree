# *Arduino Uno R3 Project*
![Title Image](https://github.com/kkhese/ArduinoTree/blob/main/Images/Title.png?raw=true)
# Motivation
The goal was to use as many Arduino components as possible to create a prototype of Christmas tree decoration that lights up the LEDs and drives motors with melodies.
# Table of Contents
- [Top of Screen](#arduino-uno-r3-project)
- [Motivation](#motivation)
- [Table of Contents](#table-of-contents)
- [Building The Project](#building-the-project)
	- [Prototype](#prototype)
	- [Circuit View](#circuit-view)
	- [Schematic View](#schematic-view)
	- [Block Diagram](#block-diagram)
- [Repository Contents](#repository-contents)
- [How to Run](#how-to-run)
    - [System & Software Requirement](#system--software-requirement)
    - [Ready to Run Guide](#ready-to-run-guide)
- [How to Use](#how-to-use)
- [Copyright Information](#copyright-information)
	- [Contact Information](#contact-information)
	- [Tfelypoc](#tfelypoc)
	- [Reference](#reference)
	- [A Link for Downloaded Images](#a-link-for-downloaded-images)

# Building The Project
This section was intended to help you follow along with the project.
*The required components for the project*
```
◇ Arduino Board 		×1
◇ Green LED 			×8
◇ Red LED  			×8
◇ White LED  			×1
◇ RGB LED  			×1
◇ 560 ohm resister		×11
◇ 2.2k ohm resister		×1
◇ Shift register  		×1
◇ Temperature Sensor  		×1
◇ Photo register  		×1
◇ BJT transistor  		×1
◇ Servos motor  		×1
◇ DC motor  			×1
◇ Piezo Buzzer  		×1
◇ Potentiometer  		×1
◇ Diode  			×1
```
If the Arduino Uno R3 kit was provided already, there will be no additional components required.
## Prototype
Image of prototype
![prototype](https://github.com/kkhese/ArduinoTree/blob/main/Images/Board.png?raw=true)

## Circuit View
Since all the components in the kit were used except for a relay, the space of the breadboard was almost full and the connection was complicated. Many cautions are required when following this project.
![circuit](https://github.com/kkhese/ArduinoTree/blob/main/Images/Circuit%20View.png?raw=true)

## Schematic View
Schematic view drawn by Tinkercad was also provided. However, since the connection was complicated, the circuit connection was difficult to recognize at a glance. Thus, it was recommended to follow the Circuit view.
![schematic](https://github.com/kkhese/ArduinoTree/blob/main/Images/Schematic.png?raw=true)
## Block Diagram
The image below shows a block diagram including the main inputs and outputs.
![blockdiagram](https://github.com/kkhese/ArduinoTree/blob/main/Images/Block%20Diagram.png?raw=true)
# Repository Contents
Below is the top-view of contents in the repository.
```
 README.md:	Read it to understand what this project is about and 		
			to learn follow the project
			
 /Test:		Codes used to partially test the circuit.
 
	 * /LEDtest: Codes for testing LEDs with Shift Register
	 * /Melody: Codes for testing Buzzer and Motors
	  
 /Images:	Image files used for README.md
 
	 * LED_SR.png: Schematic View for testing /LEDtest code
	 * Buzzer_Motor.png: Schematic View for tesing /Melody code
	  
 /Xmas:		The entire codes for this project
 
 /Videoe:	Quick presentation video
 ```
 
 
 # How to Run
 Requirements and run guide
## System & Software Requirement
 - Arduino Uno R3 board was used.
 - This project was executed by downloading the Windows ZIP file from https://www.arduino.cc/en/software.
 - It should also run in the Arduino IDE, but it have not been tested.
 - Behavior on Mac OS cannot be guaranteed.
 - It works normally in Windows 7 or later versions.

## Ready to Run Guide
1. Build the board as show in [Circuit View](#circuit-view).  
2. Extract downloaded Arduino file to any location you want.
3. Run 'arduino.exe' file.
4. Load the code in /Xmas folder
5. Connect Board to your PC via USB port
6. Upload code: it will automatically find the port. If not, try multiple times.
7. Now, you are ready to run the project

# How to Use

1. System run: 3 carols will be played
- Photo Register: Keep it dark for 2 seconds
2. System reset
- Press Arduino built-in reset button
3. System restart
- Press and hold push button more than 6 seconds: It will skip all songs and finish running at once.
4. LED blinking mode switch: There are 3 different modes
- TMP(temperature sensor): Increase temperature more than 2 degrees Celsius and decrease back more than 2 degrees
- 3 modes
	- Sequence mode: As the note progresses, the LEDs are turned on sequentially one by one starting from the LSB. When all the LEDs are turned on, it starts over from the beginning.
	- Random mode: As the note progresses, the LEDs are turned on in random order.
	- Equalizer mode: According to the note, the higher the note, the more LEDs are lit.
- RGB LED: Red for Sequence mode, Blue for Random mode, White for Equlizer mode.
5. Melody volume
- Dial potentiometer

6. Song End
- White LED: When the first song ends, the white LED blinks once, when the second song ends, the white LED blinks twice, and when the third song ends, the white LED blinks three times.

The two motors rotate in different ways depending on the melody. You can put any decorations you want on the motor.
LEDs are controlled with 8 bits. You can attach the LEDs to the decoration you want by connecting a long wire to the LEDs.

# Copyright Information

## Contact Information
Please send me an e-mail if needed:		hkq118@uregina.ca

## Tfelypoc
Feel free to copy, edit and distribute.

## Reference

Herrera, J.Daniel. "Arduino Xmas Tree Shield Based On WS2812". _Arduino-Cool.Blogspot.Com_, 2022, [http://arduino-cool.blogspot.com/2013/12/arduino-xmas-tree-shield-based-on-ws2812.html#more](http://arduino-cool.blogspot.com/2013/12/arduino-xmas-tree-shield-based-on-ws2812.html#more).

Cdn-Shop._Adafruit_.Com_, 2022, [https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf](https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf).

"Serial To Parallel Shifting-Out With A 74HC595". _Arduino.Cc_, 2022, [https://www.arduino.cc/en/Tutorial/Foundations/ShiftOut](https://www.arduino.cc/en/Tutorial/Foundations/ShiftOut).

"Piezo Christmas Songs". _Arduino Project Hub_, 2022, [https://create.arduino.cc/projecthub/joshi/piezo-christmas-songs-fd1ae9](https://create.arduino.cc/projecthub/joshi/piezo-christmas-songs-fd1ae9).

Docs._Arduino_.Cc_, 2022, [https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial](https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial).

Solarbotics.Com_, 2022, [https://www.solarbotics.com/wp-content/uploads/ardx-eg-sola-colour_sept112012-v16_colour.pdf](https://www.solarbotics.com/wp-content/uploads/ardx-eg-sola-colour_sept112012-v16_colour.pdf).

## A link for downloaded Images
Illustration image for title was  downloaded at pixabay. Their all images are free to use for any purpose.
* [Pixabay](https://www.pixabay.com/)

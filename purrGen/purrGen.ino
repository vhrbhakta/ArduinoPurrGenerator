/*
  Multiple tone player

 Plays multiple tones on multiple pins in sequence

 circuit:
 * 3 8-ohm speaker on digital pins 6, 7, and 8

 created 8 March 2010
 by Tom Igoe
 based on a snippet from Greg Borenstein

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone4
 Arduino: 1.6.12 (Windows 10), Board: "Arduino/Genuino Uno"
Arduino: 1.6.12 (Windows 10), Board: "Arduino/Genuino Uno"

Sketch uses 2,730 bytes (8%) of program storage space. Maximum is 32,256 bytes.
Global variables use 32 bytes (1%) of dynamic memory, leaving 2,016 bytes for local variables. Maximum is 2,048 bytes.
An error occurred while uploading the sketch

This report would have more information with
"Show verbose output during compilation"
option enabled in File -> Preferences.



 */
const int buttonPin = 2;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status
int i;

void setup() {
// initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
 i=-1;
}

void loop() {
   // read the state of the pushbutton value:
  //buttonState = digitalRead(buttonPin); 
  buttonState = digitalRead(buttonPin);

  while(buttonState == HIGH && i <= 11){
    noTone(3);
    if(i == 0){
      // play a note on pin 2 for 10 s:
      tone(3, 31);
      delay(1000);
    }
    else if(i == 1){
      tone(3, 40);
      delay(1000);
    }
    else if(i == 2){
      tone(3, 50);
      delay(1000);
    }
    else if(i == 3){
      tone(3, 60);
      delay(1000);
    }
    else if(i == 4){
      tone(3, 70);
      delay(1000);
    }
    else if(i == 5){
      tone(3, 80);
      delay(1000);
    }
    else if(i == 6){
      tone(3, 90);
      delay(1000);
    }
    else if(i == 7){
      tone(3, 100);
      delay(1000);
    }
    else if(i == 8){
      tone(3, 110);
      delay(1000);
    }
    else if(i == 9){
      tone(3, 120);
      delay(1000);
    }
    else if(i == 10){
      tone(3, 130);
      delay(1000);
    }
    else if(i == 11){
      tone(3, 140,1000);
      //noTone(3);
      delay(1000);
      noTone(3);
      i=-3;     
    }
    else{
      noTone(3);
      buttonState = digitalRead(buttonPin);
    }
    buttonState = digitalRead(buttonPin);
    i++;
  }
  
}
    // turn LED on:
    //digitalWrite(ledPin, HIGH);
    

     

    
 // buttonState = LOW;
//  
//  // turn off tone function for pin 8:
//  noTone(8);
//  // play a note on pin 2 for 10 s:
//  tone(2, 44);
//  delay(-1);
//
//  // turn off tone function for pin 2:
//  noTone(2);
//  // play a note on pin 3 for 10 s:
//  tone(3, 57);
//  delay(-1);
//
//  // turn off tone function for pin 3:
//  noTone(3);
//  // play a note on pin 4 for 10 ms:
//  tone(4, 70);
//  delay(-1);
//
//    // turn off tone function for pin 4:
//  noTone(4);
//  // play a note on pin 5 for 10 s:
//  tone(5, 83);
//  delay(-1);
//
//    // turn off tone function for pin 5:
//  noTone(5);
//  // play a note on pin 6 for 10 s:
//  tone(6, 96);
//  delay(-1);
//
//    // turn off tone function for pin 6:
//  noTone(6);
//  // play a note on pin 7 for 10 s:
//  tone(7, 109);
//  delay(-1);
//
//    // turn off tone function for pin 7:
//  noTone(7);
//  // play a note on pin 8 for 10 s:
//  tone(8, 122);
//  delay(-1);
//
//    // turn off tone function for pin 8:
//  noTone(8);
//  // play a note on pin 9 for 10 s:
//  tone(9, 140);
//  delay(-1);




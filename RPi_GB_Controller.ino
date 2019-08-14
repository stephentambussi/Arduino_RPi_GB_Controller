/* RPi GB Controller
   You must select Joystick from the "Tools > USB Type" menu
   Wire each button between the digital pin and ground.
   Potentiometers should be connected to analog inputs 0 to 1.
*/

#include <Bounce.h>
// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.

Bounce button0 = Bounce(0, 10);
Bounce button1 = Bounce(1, 10);  // 10 = 10 ms debounce time
Bounce button2 = Bounce(2, 10);  // which is appropriate for
Bounce button3 = Bounce(3, 10);  // most mechanical pushbuttons
Bounce button4 = Bounce(4, 10);
Bounce button5 = Bounce(5, 10);
Bounce button6 = Bounce(6, 10);
Bounce button7 = Bounce(7, 10);
Bounce button8 = Bounce(8, 10);
Bounce button9 = Bounce(9, 10);
Bounce button10 = Bounce(10, 10);
Bounce button11 = Bounce(11, 10);  // 10 = 10 ms debounce time
Bounce button12 = Bounce(12, 10);  // which is appropriate for
Bounce button13 = Bounce(13, 10);  // most mechanical pushbuttons

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
}

void loop() {
  // read analog inputs and set X-Y position
  //Implement later
  //Joystick.X(analogRead(0));
  //Joystick.Y(analogRead(1));

  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();

  // Check each button for "falling" edge.
  // Update the Joystick buttons only upon changes.
  // falling = high (not pressed - voltage from pullup resistor)
  //           to low (pressed - button connects pin to ground)
  if (button0.fallingEdge()) {
    Joystick.button(1, 1);
  }
  if (button1.fallingEdge()) {
    Joystick.button(2, 1);
  }
  if (button2.fallingEdge()) {
    Joystick.button(3, 1);
  }
  if (button3.fallingEdge()) {
    Joystick.button(4, 1);
  }
  if (button4.fallingEdge()) {
    Joystick.button(5, 1);
  }
  if (button5.fallingEdge()) {
    Joystick.button(6, 1);
  }
  if (button6.fallingEdge()) {
    Joystick.button(7, 1);
  }
  if (button7.fallingEdge()) {
    Joystick.button(8, 1);
  }
  if (button8.fallingEdge()) {
    Joystick.button(9, 1);
  }
  if (button9.fallingEdge()) {
    Joystick.button(10, 1);
  }
  if (button10.fallingEdge()) {
    Joystick.button(11, 1);
  }
  if (button11.fallingEdge()) {
    Joystick.button(12, 1);
  }
  if (button12.fallingEdge()) {
    Joystick.button(13, 1);
  }
  if (button13.fallingEdge()) {
    Joystick.button(14, 1);
  }
 
  // Check each button for "rising" edge
  // Update the Joystick buttons only upon changes.
  // rising = low (pressed - button connects pin to ground)
  //          to high (not pressed - voltage from pullup resistor)
  if (button0.risingEdge()) {
    Joystick.button(1, 0);
  }
  if (button1.risingEdge()) {
    Joystick.button(2, 0);
  }
  if (button2.risingEdge()) {
    Joystick.button(3, 0);
  }
  if (button3.risingEdge()) {
    Joystick.button(4, 0);
  }
  if (button4.risingEdge()) {
    Joystick.button(5, 0);
  }
  if (button5.risingEdge()) {
    Joystick.button(6, 0);
  }
  if (button6.risingEdge()) {
    Joystick.button(7, 0);
  }
  if (button7.risingEdge()) {
    Joystick.button(8, 0);
  }
  if (button8.risingEdge()) {
    Joystick.button(9, 0);
  }
  if (button9.risingEdge()) {
    Joystick.button(10, 0);
  }
  if (button10.risingEdge()) {
    Joystick.button(11, 0);
  }
  if (button11.risingEdge()) {
    Joystick.button(12, 0);
  }
  if (button12.risingEdge()) {
    Joystick.button(13, 0);
  }
  if (button13.risingEdge()) {
    Joystick.button(14, 0);
  }
}

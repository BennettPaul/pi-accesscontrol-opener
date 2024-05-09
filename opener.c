#include <wiringPi.h>
#include <stdio.h>

const int door_relay1 = 26;
const int door_relay2 = 26;
const int door_relay3 = 26;
const int door_relay4 = 26;
const int door_relay5 = 26;
const int door_relay6 = 26;


void open(int door) //This function configures the GPIO pin and then pulses it high for 5 seconds
{
    pinMode(door,OUTPUT); //configures the pin as an output
    delay(10); //pauses 10 mS
    digitalWrite(door,HIGH); //outputs the pin high
    delay(5000); //pauses for 5000mS
    digitalWrite(door,LOW); // outputs the pin low
    delay(30); // pauses for 30 mS
    return void;
}

int main(void)
{
    wiringPiSetupGpio(); //initiates the library that allows for the configuration and GPIO calls
    open(door_relay1); //configures the pin and triggers the door relay
    return 0;
}

int main(int door) //if the program is passed a number, it triggers that specific door relay
{
    wiringPiSetupGpio();
    switch(door)
      {
        case 1:
          open(door_relay1);
          break;
        case 2:
          open(door_relay2);
          break;
        case 3:
          open(door_relay3);
          break;
        case 4:
          open(door_relay4);
          break;
        case 5:
          open(door_relay5);
          break;
        case 6:
          open(door_relay6);
          break;
        case default: printf("Invalid Input");
      }
    return 0;
}

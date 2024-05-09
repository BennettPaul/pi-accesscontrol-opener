# pi-accesscontrol-opener
This is a little program for pulsing a GPIO on a raspberry pi to trigger a door relay. If it is not passed an argument, it opens the first relay. If it is passed an integer argument (1-6), it opens the corresponding relay.

This requires the wiringpi plugin. This can be retrieved from https://github.com/WiringPi/WiringPi

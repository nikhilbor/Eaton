# 


The problem to solve is following:

                You monitor devices, which are sending data to you.

                Each device have a unique name.

                Each device produces measurements.

 

Challange is:

                Compute number of messages you got or read from the devices.

 

The solution can be in any language (preferably C/C++)

The scope is open, you must decide how the “devices” will work in your system.

The solution should be posted on GitHub or a similar page for a review.

Please add documentation explaining us how to run your code.


This code project demonstrates three devices which are Audio, Navigation and Weather
All the three devices will trigger singals which are moninotred by the client.
Everytime the signal is triggered we will monitor this signal and keep a count of the signal which is triggered.
also we will keep a count of total number of signals which are triggered

Steps to simulate the implementation in command prompt
Enter the Signal between 1 to 3 to process data. Enter 0 to terminate
--> please enter the signal which needs to be triggered from 1, 2 or 3 and 0 to terminate

once you enter the signal number, next input will be regarding signal parameters to be sent
for example "Enter Temperature, Humidity, Pressure (seperated by spaces)

next step after you entered the parameeters is that signal will be recieved by the main monitoring application which maintains the counter for the signal recived 

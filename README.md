# Introduction
Robotics has been a tremendous successful field of research in last few decades. Regarding the development of robotics, many developed robotic arm has been deployed in industrial purposes like automation, sophisticated fabrication etc. This project is an initiative to patronize the robotic arm for hazardous situation where people who can use his hand to move object within certain range to carry out that job. This project is meant to designing and developing of a microcontroller (ATmega) based robotic arm. The project delivers a combined implementation of Electrical, Electronic as well as Mechanical generation.
The robotic arm responds to the gesture as well as can be programmed to go along a definite path and task. The system senses the movement of the replica arm and robotic arm replicates the given input gesture. The gesture is sensed by a number of potentiometers which are embedded onto the replica arm. The movement in potentiometer determines the position for the servo motors driving the parts of the arm. The number of independent ways by which a dynamic system can move, without violating any constraint imposed on  it,  is  called  the  number  of  degrees  of freedom. A  solid  body  has  six  degrees  of  freedom  when  it  has  no  restrictions  on where  it  is  allowed  to  move  in  space. 

# Working of Robotic arm
One servo is attached at the base of the bot supported by four castor wheels to provide rotatory motion to the entire bot. The  arm  has  four  servos,  which  are  controlled  through  the  use  of  only  one microcontroller Arduino UNO Board.

# Components required for  controlling the robotic arm :-
## 1)	Arduino 
The ARDUINO is a micro controller board based on the ATMEGA-328. It has 14 input / output pins. 6 analog pins, 16 Hz crystal oscillator, a USB connection a power jack, an ICSP header and reset button. It contains everything needed to support the micro controller, simply connect its to a computer with a USB cable or power it with a AC to DC adapter or battery to get a started.
## 2)	Servo motors.
A servo motor has everything built in a motor, a feedback circuit, and most important, a motor drive. It just needs one power line, ground and one control pin.
## 3)	Potentiometers.
A potentiometer is essentially a voltage divider used for measuring electric potential; the component is an implementation of the same principle. 
## 4)	Servo driver.
The PCA9685 is a 16 Channel 12 Bit PWM I2C-bus controlled Servo motor Driver. The Driver can very easily connected to your arduino, Raspberry Pie and easily programmed to control single or multiple servo motors.
## 5)	Lipo battery.
12 V Lipo battery is used in the main robotic arm. But only 7.6 V voltage is drawn to power the arm


In this project, we have used 5 potentiometers in the replicated bot. Which are used to control 5 servos in the main robotic arm through an Arduino. The output of each potentiometer is mapped as the input of each servo motor.
A Main robotic arm is made having 5-10K ohm potentiometer at it’s joints. The corresponding potentiometer values are mapped to SERVO MIN & MAX using Arduino UNO. This provides the robotic arm it’s required motion according to the movements of the replica bot.

## ELECTRONICS 
•	Analog pin numbers 4 and 5 of the Arduino board are connected to the SDA and SCL pins of the PCA9685 servo driver.
•	The SDA and SCL pins are used to signal which servo motor would rotate wrt the readings given by the potentiometer to the analog pins of the Arduino.
•	We can control 16 servo motors at the same time by using one PCA9685 servo motor driver.
•	Below is the block diagram of the motor driver.
•	I²C (Inter-Integrated Circuit), pronounced I-squared-C, is a synchronous, multi-master, multi-slave, packet switched, single-ended, serial computer bus.
•	In computer architecture, a bus is a communication system that transfers data between components inside a computer, or between computers.

# Uses 
Medical purposes - can be used in surgery
Military purposes - can work in hazardous and hostile environments.

# Results Achieved
A cost effective bot that will replicate another similar physical structure accurately with five degrees of freedom. Completed the electronic circuit using Arduino UNO, Servo driver to take input from 10 kohm potentiometer and send output to servo. Maintained the balance of the structure by using suitable sized and light weighted material.

# Difficulties faced
1)	It was difficult to find a source which can supply a 100 mA current to the servos. 
2)	Coordination of mini servos with Mega servos.
3)	Calibration of 5 servos with 5 potentiometers.

# References
## Hardware:
Microcontroller based robotic arm Operational to gesture and automated mode 
1)https://www.google.com/url?q=https://www.researchgate.net/publication/286581826_Microcontroller_based_robotic_arm_Operational_to_gesture_and_automated_mode&amp;sa=D&amp;ust=1584152073467000
2)https://www.google.com/url?q=http://www.jrrset.com/2017/volume5issue5/paper1.pdf&amp;sa=D&amp;ust=1584152158635000

## Software:
1)https://www.google.com/url?q=https://pdfs.semanticscholar.org/bc39/ef6b6968156bc275eeeb97eb78dc562c1879.pdf&amp;sa=D&amp;ust=1584152126036000
2)https://www.google.com/url?q=https://ijermt.org/publication/25/IJERMT%2520V-3-6-4.pdf&amp;sa=D&amp;ust=1584152107134000



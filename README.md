# L293DMotorDriverIC
This is project programed to move robot Tyres by 2 motors  12 volt DC .
I used in this project Aurdino circuit with L293D Motor Driver IC to contrpler in the motors and i used power Source 12V DC from the Power Supply instead  operation circuit and welud be do it in the in next task.
L293D Pinout :
The red wire is for power 1.
The green wire is for power 2.
The black wires are for ground .
The yellow wires are for inputs.
The orang wires are for outpts.
The gray wires are for enables .

Power 1 : this input is for connecting 5 voltage Arduino Circuit to L293D.
Power 2 : this input is for connecting 12 voltage from the Power Supply to the L293D for driving the motors.
Ground : this is for emptying voltage .
Inputs : for each motor 2 inptuts for controller in motor direction and connected it whit the Arduino outputs.
Outputs : these outputs are for connecting  the current for the motors.
Enables :  for each motor enable these are for controller in motors speed and on/off for motors.

Explanation of the code : 
1- I defined the outputs 1,2,3,4.
2- I defined the motor directions (forward) HIGH = on , LOW = Off 
3- I puted delay 3000ms.
4- I changed the motor directions from forward to back . 
5- I puted other delay 3000ms.
Note : I didn't define the speed for motors but it is hypothetical 143RPM.

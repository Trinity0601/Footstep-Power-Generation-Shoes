# Footstep-Power-Generation-Shoes

![power generation shoe labelled](https://user-images.githubusercontent.com/78256070/126029526-6fb34d6a-730a-4eb5-85a3-c5e83eb30411.png)


Introduction :

For an alternate method to generate electricity there are number of methods by which electricity can be produced, out if such methods footstep energy generation can be an effective method to generate electricity. 

Walking is the most common activity in human life. When a person walks, he loses energy to the road surface in the form of impact, vibration, sound etc, due to the transfer of his weight on to the road surface, through foot falls on the ground during every step. This energy can be tapped and converted in the usable form such as in electrical form. 

This device, if embedded in the shoes, can convert foot impact energy into electrical form. Human-powered transport has been in existence since time immemorial in the form of walking, running and swimming. However modern technology has led to machines to enhance the use of human-power in more efficient manner.


Aim and Objective :

The aim of this project is to convert foot step, walking and running energy into electrical energy by using transducer and use it in an electronic device that requires low power

Our objective is to design a device which uses the principle of piezoelectric transducers to generate electricity. This device, if embedded in a shoe of a person, can convert foot impact energy into electrical form which can be stored in a battery which is implanted in the shoe itself.

The battery being charged is monitored by microcontroller and level is displayed using an output display.

To produce renewable electricity from footstep using piezoelectric transducers.

Hardware :

![image](https://user-images.githubusercontent.com/78256070/126029368-a9fcf115-bd19-479a-8929-a01333137f62.png)

Software :

![image](https://user-images.githubusercontent.com/78256070/126029552-753cad43-5f8c-4772-ba4f-29015db9edce.png)

Block Diagram :

![image](https://user-images.githubusercontent.com/78256070/126029569-4e1ef6b2-f40e-454b-8771-45f11ac59e53.png)

System Flowchart :

![image](https://user-images.githubusercontent.com/78256070/126029599-eb3851ae-d57d-4366-9d33-d93a7a3d4f6a.png)

Hardware Architecture :

![View recent photos](https://user-images.githubusercontent.com/78256070/126029676-82d48f6c-3885-442b-a5a1-c74012240b19.png)

Proteus Schematics :

![image](https://user-images.githubusercontent.com/78256070/126029701-11327486-b0d3-45de-9dfd-2f2fa1dee6a4.png)

Working :

The circuit is placed in the shoes of the user. And the piezoelectric transducers are placed above the sole and under a thin sheet of foam so as to provide comfort to the user. 
The piezoelectric material converts the pressure applied to it into electrical energy.  The source of pressure is from the weight of the people walking . The transducers are placed in such an arrangement so as to generate maximum output voltage. 
The output of the piezoelectric material is not a steady one. So a bridge circuit is used to convert this variable voltage into a linear one.  Again an AC ripple filter is used to filter out any further fluctuations in the output.  The output dc voltage is then stored in a rechargeable battery. 
This is then provided to our monitoring circuitry.The circuit is a microcontroller based monitoring circuit that allows the user to monitor the voltage of the battery by  displaying it on a 7 segment display.
The Rechargeable battery is then fed to a Voltage Regulator(7805) to give a constant 5V DC output which then can be connected to a USB mobile phone charging port where users can connect cable to charge mobile phones on the go.

PCB Design : 







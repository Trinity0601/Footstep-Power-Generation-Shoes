# Footstep Power Generation Shoes
<p align="center"><img src="https://user-images.githubusercontent.com/78256070/126029931-c7ad90db-a4f1-4a29-941a-0e57f6b165ec.png" width="750" height="450" ></p>

Video of Project Prototype : https://drive.google.com/file/d/1msQIKgSqyJ1lNLidql2iTYMT0AZqbKyM/view?usp=sharing
# Introduction :

For an alternate method to generate electricity there are number of methods by which electricity can be produced, out if such methods footstep energy generation can be an effective method to generate electricity. 

Walking is the most common activity in human life. When a person walks, he loses energy to the road surface in the form of impact, vibration, sound etc, due to the transfer of his weight on to the road surface, through foot falls on the ground during every step. This energy can be tapped and converted in the usable form such as in electrical form. 

This device, if embedded in the shoes, can convert foot impact energy into electrical form. Human-powered transport has been in existence since time immemorial in the form of walking, running and swimming. However modern technology has led to machines to enhance the use of human-power in more efficient manner.


# Aim and Objective :

The aim of this project is to convert foot step, walking and running energy into electrical energy by using transducer and use it in an electronic device that requires low power

Our objective is to design a device which uses the principle of piezoelectric transducers to generate electricity. This device, if embedded in a shoe of a person, can convert foot impact energy into electrical form which can be stored in a battery which is implanted in the shoe itself.

The battery being charged is monitored by microcontroller and level is displayed using an output display.

To produce renewable electricity from footstep using piezoelectric transducers.

# Hardware :

![image](https://user-images.githubusercontent.com/78256070/126029368-a9fcf115-bd19-479a-8929-a01333137f62.png)

# Software :

![image](https://user-images.githubusercontent.com/78256070/126029552-753cad43-5f8c-4772-ba4f-29015db9edce.png)

# Block Diagram :

![image](https://user-images.githubusercontent.com/78256070/126029569-4e1ef6b2-f40e-454b-8771-45f11ac59e53.png)

# System Flowchart :

![image](https://user-images.githubusercontent.com/78256070/126029599-eb3851ae-d57d-4366-9d33-d93a7a3d4f6a.png)

# Hardware Architecture :

![View recent photos](https://user-images.githubusercontent.com/78256070/126029676-82d48f6c-3885-442b-a5a1-c74012240b19.png)

# Proteus Schematics :

![image](https://user-images.githubusercontent.com/78256070/126029701-11327486-b0d3-45de-9dfd-2f2fa1dee6a4.png)

# Working :

The circuit is placed in the shoes of the user. And the piezoelectric transducers are placed above the sole and under a thin sheet of foam so as to provide comfort to the user. 
The piezoelectric material converts the pressure applied to it into electrical energy.  The source of pressure is from the weight of the people walking . The transducers are placed in such an arrangement so as to generate maximum output voltage. 
The output of the piezoelectric material is not a steady one. So a bridge circuit is used to convert this variable voltage into a linear one.  Again an AC ripple filter is used to filter out any further fluctuations in the output.  The output dc voltage is then stored in a rechargeable battery. 
This is then provided to our monitoring circuitry.The circuit is a microcontroller based monitoring circuit that allows the user to monitor the voltage of the battery by  displaying it on a 7 segment display.
The Rechargeable battery is then fed to a Voltage Regulator(7805) to give a constant 5V DC output which then can be connected to a USB mobile phone charging port where users can connect cable to charge mobile phones on the go.

# PCB Design : 

<img src="https://user-images.githubusercontent.com/78256070/126029835-911dd622-0335-4468-80ce-a2ee4fea70e8.png" width="600" height="450" align="centre">

![pcb main 2d](https://user-images.githubusercontent.com/78256070/126029837-1d4ec45e-1c01-406c-a743-6b9382ff4de8.png)

![7SEG](https://user-images.githubusercontent.com/78256070/126029839-c593cf57-f153-443e-8ca0-93d142f24978.png)

![Switch](https://user-images.githubusercontent.com/78256070/126029886-15fce63c-a4da-48ca-9ad1-ae9209f4267b.png)

![USB](https://user-images.githubusercontent.com/78256070/126029845-ab2d7dde-a58b-42e3-8387-5ae727cf5948.png)

# 3D Design :

![power generation shoe labelled](https://user-images.githubusercontent.com/78256070/126029912-89e96514-aa82-4dfa-90d0-7ffaf7772947.png)

![power generation shoe side view](https://user-images.githubusercontent.com/78256070/126029916-2a599622-3e80-4538-aa44-8aec9186afe2.png)

![power generation shoe top view](https://user-images.githubusercontent.com/78256070/126029922-54aeded9-54a1-4212-ab02-f106fa07fcdc.png)

![power generation shoe back view](https://user-images.githubusercontent.com/78256070/126029925-90d68de6-cc84-439a-9602-d525c31764e5.png)

# Results :

The Piezoelectric transducers along with rectifier charges the 7.4 V rechargeable batteries.
After all the piezoelectric transducers are pressed simultaneously for approximately 5 times, the capacitor (Considered as battery) is charged to 50 MILLI v.
The constant 5 V 1A DC output from 7805 is used to charge cell phones using a USB port.

![image](https://user-images.githubusercontent.com/78256070/126029974-0576f357-ec7d-4a54-a024-90a99965d618.png)

# Conclusion :

In concluding the words of our project, since the power generation using foot step get its energy requirements from the Non-renewable source of energy. 
Currently,it a small scale project in shoes and it can be implemented on large scale by placing such piezoelectric tiles on footpath and roads.
It is very useful to the places all roads and as well as all kind of foot step which is used to generate the non conventional energy like electricity. It is able to extend this project by using same arrangement and construct in the footsteps/speed breaker so that increase the power production rate by fixing school and colleges, highways etc.
This can be used for many applications in rural areas where power availability is less or totally absence as India is a developing country where energy management is a big challenge for huge population
By using this project we can drive both A.C. as well as D.C loads according to the force we applied on the piezoelectric sensor.



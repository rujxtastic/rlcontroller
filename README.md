# RLController
I'LL REMOVE THIS AFTER REVIEW - I cannot attach the buttons to the PCB, they're way too far away and I am really limited on space!   

This is RLController, a controller designed for Rocket League using intuitive mechanical real-life gestures using a real model of an Octane car. It is designed for both beginners to easily perform tricks and more advanced players that need a challenge.  
The Onshape file is available [here](https://cad.onshape.com/documents/7551f43b8e30edc5f5d3d271/w/9f8330f5f6dba310bbc324b3/e/3f2c64dd342ad73578803719?renderMode=0&uiState=69d802e332debe90e1bc55d0).  
<img width="455" height="698" alt="Untitled(4)" src="https://github.com/user-attachments/assets/139f255d-03bd-4162-a769-670988da0e93" />

# Why?
I have always thought Rocket League seemed pretty intuitive. Looking at gameplay it seemed like you could just go up to the ball and hit it at the right angle every time. But being a beginner, there is a huge mechanical skill ceiling that can only be reached with experience and hundreds of hours of mastery. And controls are not intuitive at all; a 2D controller or keyboard isn't suited for a 3D game. So I decided to make a handheld controller that feels like a mouse but plays like you are the driver.  
It uses an accelerometer, a gyroscope and buttons near the wheels to detect movement and move the car accordingly.

# Credits
Credit to GenericGeek (@GenericGeek_91980) on Printables for the shell model taken from the Rocket League game files. I have edited the insides to accomodate PCB components and made it much more 3D-printer and edit-friendly. The model is available [here](https://www.printables.com/model/234512-octane-rocket-league-multipart).

# Features
It does all the basic controls, such as:
- Forward: push on the front two wheels
- Backward: push on the back two wheels
- Sharp left/right forwards: push on the front left/right wheel
- Sharp left/right backwards: push on the back left/right wheel
- Slight turn: turn the car
- Drift left/right: push on both left/right wheels
- Boost: push on the bonnet (hood)
It also can perform aerial movements:
- Jump/Double jump: quickly jerk car upwards
- Air roll: angle car in direction of travel and jump
- Airborne angles: angle car in direction of travel
  
It does not easily perform menu operations or work well outside of Rocket League, but since the inputs are mapped to mostly default Rocket League controls some inputs are able to be performed: for example, jumping also skips replay as both are bound to the A button (Xbox).   

Painting is an option that works well with this car if you want custom designs. Print in white matte for ease.

# Dimensions
Bumper to spoiler (length): 18.4cm  
Base to bumper (height): 6.937cm  
Wing to wing (width): 9.518cm  
Clickable hood area: 2.09cm x 2.842cm  
Travel distance of boost button: 0.018cm
  


# Modelling  
Schematic:  
<img width="653" height="388" alt="image" src="https://github.com/user-attachments/assets/ab21c361-6252-4960-b531-49b88630c86d" />

PCB design:  
<img width="279" height="555" alt="image" src="https://github.com/user-attachments/assets/2e9cb47c-3370-4f3d-ae8d-c2cc957006b0" />   
(notice how I didn't use any vias!)   
3D model:  
<img width="4196" height="2547" alt="Assembly 1(4)" src="https://github.com/user-attachments/assets/36a54c73-9b73-4671-bac6-8fdf73e5363e" />
<img width="640" height="391" alt="image" src="https://github.com/user-attachments/assets/41001f6e-1719-4ab4-b875-23b25b027976" />
<img width="434" height="501" alt="image" src="https://github.com/user-attachments/assets/d50c2895-12a3-402e-a229-99a502aca648" />
<img width="654" height="515" alt="image" src="https://github.com/user-attachments/assets/3bb4c0dc-7014-4772-b71d-43b9ef19e9ed" />


Underside without wheels:
<img width="1031" height="532" alt="image" src="https://github.com/user-attachments/assets/588e8002-a6d5-44c7-9a85-313194bfda41" />

3D render of the car.
<img width="1920" height="1080" alt="car4" src="https://github.com/user-attachments/assets/833c6b48-f90b-4b9f-944f-9e28cd85e7f6" />
<img width="1920" height="1080" alt="car5" src="https://github.com/user-attachments/assets/e12b9108-cf0d-4433-92fa-309cbf61d1a9" />


# BOM

Materials | Count | Total cost | Link 
---|---|---|---
PCB |1|£1.49|https://cart.jlcpcb.com/quote?quoteTab=standardPcb
Wemos C3 Mini |1|£8.90|https://kunkune.co.uk/shop/esp32-esp8266/c3-mini-v2-1-0-lolin-wifi-bluetooth-le-ble-iot-board-esp32-c3-4mb-flash/
Wemos Shipping | - |£1.90|-
MPU 6050 Chip |1|£2.53|https://www.ebay.co.uk/itm/257062945708
MPU Shipping | - |£1.20|-
4.7k Resistors (very easy to come by) |2|£1.16|https://www.switchelectronics.co.uk/products/4-7k-yageo-1206-smd-chip-resistor-1-0-25w-pack-of-100
3D print |1|£14.40|https://jlc3dp.com/3d-printing-quote
On-On Mini Slide Switch |1|£0.92|https://www.switchelectronics.co.uk/products/on-on-mini-slide-switch-dpdt-5a
Mini Push Button Switch |5|£1.00|https://www.dfrobot.com/product-612.html
Button Shipping| -|£3.35| -
40mm Wheels |4|£0.76|https://www.aliexpress.us/item/2255801038501851.html
Copper wire (<=28G)|long reel|£1.77|https://www.ebay.co.uk/itm/301767024783 (although you can get them anywhere)
LiPo Battery (~3.7V) |1|£4.30|https://kitronik.co.uk/products/4652-polymer-lithium-ion-battery-1ah
Screws (2mm diameter, 2.4-7.5mm length)|2|£2.01|https://www.switchelectronics.co.uk/products/m2-x-4mm-nylon-pan-head-screws-pack-of-100
JCPLB Shipping | - |£13.11|-
Total:||£58.80|   

A lot of costs can be avoided by purchasing items locally as well as funding from other sources such as friends or your own home!

# Building
1. Solder the PCB together, using the outlines as guidance. Reuse the pins meant for the WEMOS in the switch pin nodes and adjust until the pins won't touch the base of the bottom. Here is a diagram of the silkscreen that you will see.     
<img width="284" height="559" alt="image" src="https://github.com/user-attachments/assets/0b0d1635-98e4-4792-aa01-b1e08e1c0697" />  

2. Flash the chip with the firmware: I would recommend using the Arduino app. Plug in the PCB into your computer, select the PCB in the dropdown menu and download the .ino files into it.  
3. Place the on-on slide switch into the hole at the bottom. Use glue to attach it in place. Solder the middle pin to the power supply in SW6 and solder the ground to one of the other pins in   the direction you want 'on' to be. For example, if you want to slide up for on, solder the top pin.  
4. Solder wires to the non-ground pins. There should be five not soldered. Wire them like so:  
- SW1: Back left  
- SW2: Front left  
- SW3: Hood  
- SW4: Back right  
- SW5: Front right  
This is the wiring diagram, I've labelled the entry points in red and colour-coded/(number-coded if you're colourblind) the components to wire.  
<img width="847" height="440" alt="wiringdiagram" src="https://github.com/user-attachments/assets/ade0c140-b958-484e-9324-35d29c6b085e" />

Leave enough wire to solder switches, but don't worry if they are too long as there is enough space inside to tuck in extra wires. Push the wires of SW1, SW2, SW4, SW5 through the holes on the left and right of the back of the car.   
5. Glue the hood switch to the middle of the hole so that the hood will press it.
6. Solder the hood switch first as the wires will not get in the way of anything. Since these wires should never move as it is attached to the body, I would not add much extra slack.  
7. Solder the remaining wires to the PCB and thread them through their respective holes to the outside of the body.  
8. Glue the remaining 4 switches under the wheels (the top model will have platforms to attach each of them).  
9. Place the battery inside the square cavity. Connect the pin to the socket on the underside of the PCB.  
10. Push the PCB into the carved holes and put the screws inside and tighten them.  
11. Slide the top of the car onto the body from the top down, making sure that the wires are not getting in the way, going backwards until you feel the click. Confirm it won't slide out easily. 
12. Solder the wires to the buttons, indicated on the wiring diagram.  
13. Place the wheels, putting their axles through the holes.  

Your build should be assembled. Disassembly requires being very careful due to the glue holding the switches in place, but this is dependent on how much wire extension you gave. Charging does not require disassembly.  

# Post-building setup   
1. Make sure you have angled the controller in the direction you want it to percieve as forwards.   
2. Turn the PCB on (with the switch underneath).   
3. Go to default controller settings and rebind roll left and roll right to LB and RB respectively.   
4. Connect the Bluetooth controller in settings.

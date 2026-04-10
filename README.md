# RLController
This is RLController, a controller designed for Rocket League using intuitive mechanical real-life gestures using a real model of an Octane car. It is designed for both beginners to easily perform tricks and more advanced players that need a challenge.  
The Onshape file is available [here](https://cad.onshape.com/documents/7551f43b8e30edc5f5d3d271/w/9f8330f5f6dba310bbc324b3/e/3f2c64dd342ad73578803719?renderMode=0&uiState=69d802e332debe90e1bc55d0).  
<img width="3983" height="6049" alt="RLControllerZine" src="https://github.com/user-attachments/assets/cf9f7eec-7171-4446-a1f3-49f5ad4fa3c7" />
# Why?
I have always thought Rocket League seemed pretty intuitive. Looking at gameplay it seemed like you could just go up to the ball and hit it at the right angle every time. But being a beginner, there is a huge mechanical skill ceiling that can only be reached with experience and hundreds of hours of mastery. And controls are not intuitive at all; a 2D controller or keyboard isn't suited for a 3D game. So I decided to make a handheld controller that feels like a mouse but plays like you are the driver.  
It uses an accelerometer, a gyroscope and buttons near the wheels to detect movement and move the car accordingly.

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

# Dimensions
Bumper to spoiler (length): 18.4cm  
Base to bumper (height): 6.937cm  
Wing to wing (width): 9.518cm  
Clickable hood area: 2.09cm x 2.842cm  

# BOM
You will need:
Materials | Count | Total cost | Link
---|---|---|--- 
PCB |1| £1.49 (free for first time) | https://cart.jlcpcb.com/quote?quoteTab=standardPcb
Wemos C3 Mini |1|£8.90| https://kunkune.co.uk/shop/esp32-esp8266/c3-mini-v2-1-0-lolin-wifi-bluetooth-le-ble-iot-board-esp32-c3-4mb-flash/
Wemos Shipping | - |£1.90|-
MPU 6050 Chip |1|£2.53| https://www.ebay.co.uk/itm/257062945708
MPU Shipping | - |£1.20|-
4.7k Resistors (very easy to come by) |2|£1.16| https://www.switchelectronics.co.uk/products/4-7k-yageo-1206-smd-chip-resistor-1-0-25w-pack-of-100
3D print (files available above) |1|£14.40| https://jlc3dp.com/3d-printing-quote
On-On Mini Slide Switch |1|£0.92| https://www.switchelectronics.co.uk/products/on-on-mini-slide-switch-dpdt-5a
Mini Push Button Switch |5|£1.00| https://www.dfrobot.com/product-612.html
Button Shipping| -| £3.35| -
40mm Wheels |4|£0.76| https://www.aliexpress.us/item/2255801038501851.html
Copper wire (<=28G)| 30cm |£1.77| https://www.ebay.co.uk/itm/301767024783 (although you can get them anywhere)
LiPo Battery (~3.7V) |1|£4.30| https://kitronik.co.uk/products/4652-polymer-lithium-ion-battery-1ah
"Screws (2mm diameter, 2.4-7.5mm length) "|2|£2.01| https://www.switchelectronics.co.uk/products/m2-x-4mm-nylon-pan-head-screws-pack-of-100
JCPLB Shipping | - |£13.11|-
Switch Electronics Shipping | - | £2.99
USB-C Extensions (not necessary but very helpful) | 1 | £2.79 | https://www.aliexpress.com/item/1005005240135902.html
USB-C Shipping | - | £2.87 | -
Gross total: £67.45 
Net total: £0.00 (self-funded)  

A lot of these costs can be saved by ordering in bulk or funding the parts more locally.  

# Modelling  
Schematic:  
<img width="653" height="388" alt="image" src="https://github.com/user-attachments/assets/ab21c361-6252-4960-b531-49b88630c86d" />

PCB design:  
<img width="284" height="562" alt="image" src="https://github.com/user-attachments/assets/7c662381-3314-40a1-9fcc-b6ec5af7834e" />

3D model:  
<img width="736" height="419" alt="image" src="https://github.com/user-attachments/assets/793ca1fd-2e0a-490f-93b7-a530ff5ad48b" />
<img width="1093" height="466" alt="image" src="https://github.com/user-attachments/assets/acb19c6f-fd95-4792-bfe5-751da6ee6f7f" />
<img width="709" height="538" alt="image" src="https://github.com/user-attachments/assets/a8f4fe57-2541-4767-96e2-2d297c505895" />

Small button switches should be attached at the yellow regions:  
<img width="1021" height="536" alt="image" src="https://github.com/user-attachments/assets/7dfcf9e2-dcc7-4c9c-8209-de583150369a" />
Slide switch should be attached inside the yellow perimeter:  
<img width="1028" height="535" alt="image" src="https://github.com/user-attachments/assets/8c9264cb-2a5c-4494-b759-501d40565892" />
It should look like this:  
<img width="1031" height="532" alt="image" src="https://github.com/user-attachments/assets/588e8002-a6d5-44c7-9a85-313194bfda41" />

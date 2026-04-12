# RLController
This is RLController, a controller designed for Rocket League using intuitive mechanical real-life gestures using a real model of an Octane car. It is designed for both beginners to easily perform tricks and more advanced players that need a challenge.  
The Onshape file is available [here](https://cad.onshape.com/documents/7551f43b8e30edc5f5d3d271/w/9f8330f5f6dba310bbc324b3/e/3f2c64dd342ad73578803719?renderMode=0&uiState=69d802e332debe90e1bc55d0).  
<img width="3983" height="6049" alt="RLControllerZine" src="https://github.com/user-attachments/assets/cf9f7eec-7171-4446-a1f3-49f5ad4fa3c7" />
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
<img width="284" height="562" alt="image" src="https://github.com/user-attachments/assets/7c662381-3314-40a1-9fcc-b6ec5af7834e" />

3D model:  
<img width="805" height="432" alt="image" src="https://github.com/user-attachments/assets/d7680dfc-7dd1-4c75-bbb4-2daaaa493d50" />
<img width="775" height="525" alt="image" src="https://github.com/user-attachments/assets/e54f071b-6fd4-4034-89e2-527a189f9790" />
<img width="1019" height="409" alt="image" src="https://github.com/user-attachments/assets/4ac8d6cf-1fff-47cc-884c-0919a9247e6e" />


Underside with the electronic pieces:
<img width="1031" height="532" alt="image" src="https://github.com/user-attachments/assets/588e8002-a6d5-44c7-9a85-313194bfda41" />

3D render of the car.
<img width="479" height="394" alt="Screenshot 2026-04-10 201116" src="https://github.com/user-attachments/assets/89f09401-f2d2-477e-962a-6cd2f363fc06" />
<img width="633" height="293" alt="Screenshot 2026-04-10 201123" src="https://github.com/user-attachments/assets/ca4f79bd-5db5-4a34-b432-91361b301e16" />
<img width="317" height="559" alt="Screenshot 2026-04-10 201142" src="https://github.com/user-attachments/assets/7291e3b5-258f-4571-aad5-aa67d268274a" />
<img width="852" height="436" alt="Screenshot 2026-04-10 202339" src="https://github.com/user-attachments/assets/82c72397-b52e-4a70-acae-4c950f817a2e" />
![Uploading RLCrender.png…]()


# Building
1. Solder the PCB together, using the outlines as guidance. Reuse the pins meant for the WEMOS in the switch pin nodes and adjust until the pins won't touch the base of the bottom.
2. Place the on-on slide switch into the hole at the bottom. Use glue to attach it in place. Solder the middle pin to the power supply in SW6 and solder the ground to one of the other pins in the direction you want 'on' to be. For example, if you want to slide up for on, solder the top pin.
3. Solder wires to the non-ground pins. There should be five not soldered. Wire them like so:   
- SW1: Back left
- SW2: Front left
- SW3: Hood
- SW4: Back right
- SW5: Front right
Leave enough wire to solder switches, but don't worry if they are too long as there is enough space inside to tuck in extra wires. Push the wires of SW1, SW2, SW4, SW5 through the holes on the left and right of the back of the car.
4. Solder the wires to one of the feet of each switch. We will only use one side.
5. Solder ground wires to the foot to the right of the previous solder job. It is important to make sure the feet are facing the same way, not opposite ways.
6. Place the battery inside the square cavity. Connect the pin to the socket on the underside of the PCB.
7. Connect the USB-C extension to the PCB and push one end into the USB-C hole.
7. Push the PCB into the carved holes and put the screws inside and tighten them.
8. Fold up the USB-C cable until the desired length is reached. I would glue the USB-C here but leaving a part slightly trailing is okay. The battery alone should be plenty to make it last a long time.
9. Glue the hood switch to the hole carved, tucking the metal pins underneath or onto the wall.
10. Slide the top of the car onto the bottom, making sure that the wires are not getting in the way, going backwards until you feel the click. Confirm it won't slide out easily.
11. Glue the remaining 4 switches under their respective wheels.
12. Place the wheels, putting thier axles through the holes.
Your build should be assembled. Disassembly requires being very careful due to the glue holding the switches in place, but this is dependent on how much wire extension you gave.

# Post-building setup
1. Flash the chip with the firmware, the Arduino application works well for this.
2. Make sure you have angled the controller in the direction you want it to percieve as forwards.
3. Turn the PCB on (with the switch underneath).
4. Go to default controller settings and rebind roll left and roll right to LB and RB respectively.
5. Connect the Bluetooth controller in settings.

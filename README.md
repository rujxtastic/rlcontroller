# RLController
This is RLController, a controller designed for Rocket League using intuitive mechanical real-life gestures using a model of an Octane car. It is designed for both beginners to easily perform tricks and more advanced players that need a challenge.
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

# BOM
You will need:
| Materials | Count | Total cost | Link |
| --------- | ----- | ---------- | ---- |
PCB | 1 | £3.10 (free for first time) | https://cart.jlcpcb.com/quote?quoteTab=standardPcb
PCB Shipping | 1 | £1.50
3D print | 1 | idk | idk
On-On Mini Slide Switch | 1 | £0.92 | https://www.switchelectronics.co.uk/products/on-on-mini-slide-switch-dpdt-5a?variant=45333622980917
Mini Push Button Switch | 5 | £1.80 | https://www.dfrobot.com/product-612.html
40mm Wheels | 4 | £2.49 | https://www.alibaba.com/product-detail/DIY-Material-Wheels-40mm-100mm-Shaft_1601672763046.html
Copper wire (<=28G) | 30cm | £1.77 | https://www.ebay.co.uk/itm/301767024783 (although you can get them anywhere)
LiPo Battery (~3.7V) | 1 | £4.30 | https://kitronik.co.uk/products/4652-polymer-lithium-ion-battery-1ah
Screws | 2 | idk | idk

#Modelling
Schematic:
<img width="653" height="388" alt="image" src="https://github.com/user-attachments/assets/ab21c361-6252-4960-b531-49b88630c86d" />

PCB design:
<img width="284" height="562" alt="image" src="https://github.com/user-attachments/assets/7c662381-3314-40a1-9fcc-b6ec5af7834e" />

3D model:
<img width="736" height="419" alt="image" src="https://github.com/user-attachments/assets/793ca1fd-2e0a-490f-93b7-a530ff5ad48b" />
Small button switches should be attached at the yellow regions:
<img width="1021" height="536" alt="image" src="https://github.com/user-attachments/assets/7dfcf9e2-dcc7-4c9c-8209-de583150369a" />
Slide switch should be attached inside the yello perimeter:
<img width="1028" height="535" alt="image" src="https://github.com/user-attachments/assets/8c9264cb-2a5c-4494-b759-501d40565892" />

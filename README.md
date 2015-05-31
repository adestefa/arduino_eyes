arduino_eyes
============

Arduino_eyes


 A simple Arduino program that animates two 8x8 LED Matrix boards using 8x8AdafruitMatrix library. 

I was inspired by a great Adafruit tutorial by Phillip Burgess [Animating Multiple LED backpacks](http://learn.adafruit.com/animating-multiple-led-backpacks). He was able to make an animated face with a voice changer for a Halloween costume with amazing results. After seeing his success I was interested in creating my own pair of electronic eyes.

![alt tag](http://adestefa.com/blog/imgs/LED_EYES_.png)


# The hardware

Using an Arduino Uno R3 and two 8x8 LED kits from Adafruit I was able to get up and running very quickly. The soldering was the easy part. Just make sure you get the matrix board aligned correctly with the driver board before you start.

The circuit itself is dead simple. I have to say I really like working with the I2C serial bus and the Adafruit_8x8matrix object. It makes it so simple that all that is required to connect all components is using a common clock and data line. Then you can send or receive data from each component using a unique address on the same line. By default the 8x8's come with 0x70 as their address. Using some jumper solder you can increment the address to make them unique but in our case we want both eyes to have the same address which makes it even easier. The only feature we lose in this configuration is winking.

![alt tag](http://adestefa.com/blog/imgs/LED_EYES_F.png)


You can find schematic and full description: http://adestefawp.wordpress.com/projects/led-eyes/comment-page-1/


You can find the parts at: http://Adafruit.com/

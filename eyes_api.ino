static uint8_t *u8p;

/****
  Emulate basic animation of a pair of eyes using 8x8 LED Matrix

  look_eyes(uint8_t *bitmap, int delay)
    - set a bitmap over both eyes with a given delay
  
  blink_eyes(uint8_t *bitmap) 
    - using series of canned bitmaps, show eyes blinking starting from *bitmap and returning to *bitmap that is provided
    
  look_center_small()
    - eyes center and squint   
    
  look_center_large()
    - eyes center wide   
    
  look_center_left()
    - look left then blink  
    
  look_center_right()
    - look right then blink
  
  
*/





void static look_eyes(uint8_t *bitmap, int d){
  u8p = bitmap;
  matrix.clear();
  matrix.drawBitmap(0, 0, bitmap, 8, 8, LED_ON);
  matrix.writeDisplay(); 
  delay(d);
  
}

void static blink_eyes(uint8_t *bitmap){
  Serial.println("Blink eyes:");
   look_eyes(eyes_shut_1_bmp, 50);
   look_eyes(eyes_shut_2_bmp, 10);
   look_eyes(eyes_shut_3_bmp, 10);
   look_eyes(eyes_shut_bmp, 50);
   look_eyes(eyes_shut_3_bmp, 10);
   look_eyes(eyes_shut_2_bmp, 20);
   look_eyes(eyes_shut_1_bmp, 50);
   look_eyes(bitmap, 2000);  
}

void static look_center_small(){
  look_eyes(eyes_center_small_bmp, 1020);
  blink_eyes(eyes_center_small_bmp);
  
}

void static look_center_right(){
  look_eyes(eyes_center_right_bmp, 2000);
  blink_eyes(eyes_center_right_bmp);
}

void static look_center_right_max(){
 look_eyes(eyes_center_right_max_bmp, 2000);
}


void static look_center_left(){
 look_eyes(eyes_center_left_bmp, 1000);
 blink_eyes(eyes_center_left_bmp);
 
}

void static look_center_left_ma(){
  look_eyes(eyes_center_left_max_bmp, 2000);
}

void static look_center_large(){
 look_eyes(eyes_center_large_bmp, 1000);
}



/**   */

void static square() {
   matrix.drawRect(0, 0, 8, 8, LED_ON); 
}


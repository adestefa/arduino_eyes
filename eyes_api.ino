static uint8_t *u8p;

void static look_eyes(uint8_t *bitmap, int d){
  u8p = bitmap;
  matrix.clear();
  matrix.drawBitmap(0, 0, bitmap, 8, 8, LED_ON);
  matrix.writeDisplay(); 
  delay(d);
  
}

void static blink_eyes(){
  Serial.println("Blink eyes:");
    look_eyes(eyes_shut_1_bmp, 500);
    look_eyes(eyes_shut_2_bmp, 500);
    look_eyes(eyes_shut_3_bmp, 500);
    look_eyes(eyes_shut_bmp, 500);
}

void static look_center_small(){
  look_eyes(eyes_center_small_bmp, 1020);
  
}

void static look_center_right(){
  look_eyes(eyes_center_right_bmp, 1000);
}

void static look_center_right_max(){
 look_eyes(eyes_center_right_max_bmp, 2000);
}


void static look_center_left(){
 look_eyes(eyes_center_left_bmp, 1000);
 
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


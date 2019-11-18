#include <Keyboard.h>
void setup() {
 pinMode (2,INPUT_PULLUP);
 pinMode (3,INPUT_PULLUP);
 pinMode (4,INPUT_PULLUP);
 pinMode (5,INPUT_PULLUP);
 pinMode (6,INPUT_PULLUP);
 pinMode (7,INPUT_PULLUP);
 pinMode (9,INPUT_PULLUP);
 pinMode (10,INPUT_PULLUP);
 pinMode (14,INPUT_PULLUP);
 pinMode (15,INPUT_PULLUP);
 pinMode (16,INPUT_PULLUP);
 Serial.begin(9600);
 
}
boolean grabar=false;

void loop() {
    
           if(digitalRead(2) == LOW){
            Keyboard.begin();
            Keyboard.press(KEY_LEFT_ALT);            
            Keyboard.press(KEY_F4);
            Keyboard.releaseAll();
            delay(1000);          
          }
          
           if(digitalRead(3) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_CTRL);
           Keyboard.press('c');
           Keyboard.releaseAll();
           delay(1000);          
          }
          
           if(digitalRead(4) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_CTRL);
           Keyboard.press('v');
           Keyboard.releaseAll();
           delay(1000);          
          }
           
           if(digitalRead(5) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_CTRL);
           Keyboard.press(KEY_LEFT_SHIFT);
           Keyboard.press('n');
           Keyboard.releaseAll();
           delay(1000);
          }
          
           if(digitalRead(6) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_F5);        
           Keyboard.releaseAll();
           delay(1000);        
          }
          
           if(digitalRead(7) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_CTRL);
           Keyboard.press(KEY_LEFT_SHIFT);
           Keyboard.press(KEY_ESC);
           Keyboard.releaseAll();
           delay(1000);        
          }
           
           if(digitalRead(9) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_CTRL);
           Keyboard.press(KEY_LEFT_ALT);
           Keyboard.press(KEY_DELETE);
           Keyboard.releaseAll();
           delay(1000);
          }
          
            if(digitalRead(10) == LOW ){
           Keyboard.begin();
          
           Keyboard.press(KEY_LEFT_GUI);
           Keyboard.press('5');
           Keyboard.releaseAll();
           delay(1000);
          }
          
           if(digitalRead(16) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_GUI);
           Keyboard.press('i');           
           Keyboard.releaseAll();
           delay(1000);
          }
    
           if(digitalRead(14) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_GUI);
           Keyboard.press('e');
           Keyboard.releaseAll();
           delay(1000);
          }
               
           if(digitalRead(15) == LOW ){
           Keyboard.begin();
           Keyboard.press(KEY_LEFT_CTRL);
           Keyboard.press('p');
           Keyboard.releaseAll();
           delay(1000);
          }
       }

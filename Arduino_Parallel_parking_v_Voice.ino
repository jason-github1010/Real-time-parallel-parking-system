#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4,5,6,7);
int abc=0;
int lock=0;
//int ledPin = 13;
int gotparking=0;

int button= analogRead(A0);

  int sensorValue1= analogRead(A1);      
  int sensorValue2= analogRead(A2);
  int sensorValue3= analogRead(A3);
  int sensorValue4= analogRead(A4);

  
  float voltage1 = sensorValue1 * (5.0 / 511.0);  
  float voltage2 = sensorValue2 * (5.0 / 511.0); 
  float voltage3 = sensorValue3 * (5.0 / 511.0); 
  float voltage4 = sensorValue4 * (5.0 / 511.0); 

  float distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
  float distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
  float distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
  float distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
  



void setup()                              // the setup routine runs once when you press reset:
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);                      // initialize serial communication at 9600 bits per second:
  lcd.begin(16, 2);
  

  
}


int space()
{ 
  int sensorValue1= analogRead(A1);      
  int sensorValue2= analogRead(A2);
  int sensorValue3= analogRead(A3);
  int sensorValue4= analogRead(A4);
  
  float distance1;
  float distance2; 
  float distance3; 
  float distance4; 
  
  float voltage1 = sensorValue1 * (5.0 / 511.0);  
  float voltage2 = sensorValue2 * (5.0 / 511.0); 
  float voltage3 = sensorValue3 * (5.0 / 511.0); 
  float voltage4 = sensorValue4 * (5.0 / 511.0) ; 

  distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
  distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
  distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
  distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
  
  
   
   while(gotparking==0)
{   
  if ( distance1 >= 4.8 && distance1 <6.0  )
 { 
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Got Parking");
   lcd.setCursor(0,1);
   lcd.print("Move Forward");
 
   
     Serial.print ("Got Parking, move forward ");  
     Serial.print(distance1);
     Serial.print(" m, ");
     Serial.print(distance2);
     Serial.print(" m, ");
     Serial.print(distance3);
     Serial.print(" m, ");
     Serial.print(distance4);
     Serial.print(" m");
     Serial.println();
     
   delay(3000);
 
 return gotparking=1;
   
   }
   
  else
  {   
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("No Parking");
   
   
       Serial.print ("No Parking, ");  
       Serial.print(distance1);
       Serial.print(" m, ");
       Serial.print(distance2);
       Serial.print(" m, ");
       Serial.print(distance3);
       Serial.print(" m, ");
       Serial.print(distance4);
       Serial.print(" m");
       Serial.println();
           
 return gotparking=0;  
 
  }
}}
   
 
   
   int fulleft()
{ 
  int sensorValue1= analogRead(A1);      
  int sensorValue2= analogRead(A2);
  int sensorValue3= analogRead(A3);
  int sensorValue4= analogRead(A4);
  
  float distance1;
  float distance2; 
  float distance3; 
  float distance4; 
  
  float voltage1 = sensorValue1 * (5.0 / 511.0);  
  float voltage2 = sensorValue2 * (5.0 / 511.0); 
  float voltage3 = sensorValue3 * (5.0 / 511.0); 
  float voltage4 = sensorValue4 * (5.0 / 511.0) ; 

  distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
  distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
  distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
  distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
  
   
  
    while(gotparking==1  ) 
    {
      int button= analogRead(A0);
      int sensorValue1= analogRead(A1);      
      int sensorValue2= analogRead(A2);
      int sensorValue3= analogRead(A3);
      int sensorValue4= analogRead(A4);
  
      float distance1;
      float distance2; 
      float distance3; 
      float distance4; 
  
      float voltage1 = sensorValue1 * (5.0 / 511.0);  
      float voltage2 = sensorValue2 * (5.0 / 511.0); 
      float voltage3 = sensorValue3 * (5.0 / 511.0); 
      float voltage4 = sensorValue4 * (5.0 / 511.0) ; 
    
      distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
      distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
      distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
      distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
      
        
     // if((distance1 <= 1)||(lock==1))
     // {
      // if((distance1 <= 3)||(lock>0))
       //{lock=1;
       
       
       if(button <30){lock=1;}
       if (lock >0){
     if ((distance2 >= 0.5  && distance2 <= 0.8) )
     {
       lcd.clear(); 
       lcd.setCursor(0, 0);
       lcd.print("Stop,");
       lcd.setCursor(0,1);
       lcd.print("Turn Full Left");
 
      abc++;
         Serial.print ("Stop, turn full left, ");
         Serial.print(distance1);
         Serial.print(" m, ");
         Serial.print(distance2);
         Serial.print(" m, ");
         Serial.print(distance3);
         Serial.print(" m, ");
         Serial.print(distance4);
         Serial.print(" m");
         Serial.println();
        
        delay(3000);
      gotparking=2;
      break;
     }
      else if (distance2 >0.8)
      {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Move close to ");
        lcd.setCursor(0,1);
        lcd.print("the car");
        
           Serial.print ("Move close to the car ");
           Serial.print(distance1);
           Serial.print(" m, ");
           Serial.print(distance2);
           Serial.print(" m, ");
           Serial.print(distance3);
           Serial.print(" m, ");
           Serial.print(distance4);
           Serial.print(" m");
           Serial.println();
       
        // delay(3000);
      }
      else if (distance2 < 0.5)
      {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Move far from ");
        lcd.setCursor(0,1);
        lcd.print("the car");
        
          Serial.print ("Move far from the car ");
          Serial.print(distance1);
          Serial.print(" m, ");
          Serial.print(distance2);
          Serial.print(" m, ");
          Serial.print(distance3);
          Serial.print(" m, ");
          Serial.print(distance4);
          Serial.print(" m");
          Serial.println();
     
        // delay(3000);
      }
      
      
      
      else //if(abc>0)
      {
        lcd.clear(); 
        lcd.setCursor(0, 0);
        lcd.print("Backward");
        
        
          Serial.print ("Park Again, ");
          Serial.print(distance1);
          Serial.print(" m, ");
          Serial.print(distance2);
          Serial.print(" m, ");
          Serial.print(distance3);
          Serial.print(" m, ");
          Serial.print(distance4);
          Serial.print(" m");
          Serial.println();
     
   //delay(3000);
       return gotparking=1;
       
      
      }
    }}}



 int fullright()
 {
   int sensorValue1= analogRead(A1);      
   int sensorValue2= analogRead(A2);
   int sensorValue3= analogRead(A3);
   int sensorValue4= analogRead(A4);
  lock=0;
   float distance1;
   float distance2; 
   float distance3; 
   float distance4; 
  
   float voltage1 = sensorValue1 * (5.0 / 511.0);  
   float voltage2 = sensorValue2 * (5.0 / 511.0); 
   float voltage3 = sensorValue3 * (5.0 / 511.0); 
   float voltage4 = sensorValue4 * (5.0 / 511.0) ; 

   distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
   distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
   distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
   distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
   
   
   while(gotparking == 2 )
   {
      int sensorValue1= analogRead(A1);      
      int sensorValue2= analogRead(A2);
      int sensorValue3= analogRead(A3);
      int sensorValue4= analogRead(A4);
  
      float distance1;
      float distance2; 
      float distance3; 
      float distance4; 
  
      float voltage1 = sensorValue1 * (5.0 / 511.0);  
      float voltage2 = sensorValue2 * (5.0 / 511.0); 
      float voltage3 = sensorValue3 * (5.0 / 511.0); 
      float voltage4 = sensorValue4 * (5.0 / 511.0) ; 
    
      distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
      distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
      distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
      distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
      
       
       
      if(distance1<=1)
      {
      if ((distance4 >=2.3 && distance4 <=2.5) && distance1<=1)   
     { 
       lcd.clear(); 
       lcd.setCursor(0, 0);
       lcd.print("Turn Full Right");
       

        
         Serial.print ("Turn Full Right, ");
         Serial.print(distance1);
         Serial.print(" m, ");
         Serial.print(distance2);
         Serial.print(" m, ");
         Serial.print(distance3);
         Serial.print(" m, ");
         Serial.print(distance4);
         Serial.print(" m");
         Serial.println();
         
 
   //delay(3000);
      
     return  gotparking=3;
     
     }
       else
       {
         lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("backward");
         
           Serial.print ("Park Again0, ");
           Serial.print(distance1);
           Serial.print(" m, ");
           Serial.print(distance2);
           Serial.print(" m, ");
           Serial.print(distance3);
           Serial.print(" m, ");
           Serial.print(distance4);
           Serial.print(" m");
           Serial.println();
         
  //delay(3000);
     return  gotparking=2;
         }
    }}}
  
  
  
  int forward()
 {
   int sensorValue1= analogRead(A1);      
   int sensorValue2= analogRead(A2);
   int sensorValue3= analogRead(A3);
   int sensorValue4= analogRead(A4);
  
   float distance1;
   float distance2; 
   float distance3; 
   float distance4; 
  
   float voltage1 = sensorValue1 * (5.0 / 511.0);  
   float voltage2 = sensorValue2 * (5.0 / 511.0); 
   float voltage3 = sensorValue3 * (5.0 / 511.0); 
   float voltage4 = sensorValue4 * (5.0 / 511.0) ; 

   distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
   distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
   distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
   distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
   
    
  
    while(gotparking==3  )    
    {
      int sensorValue1= analogRead(A1);      
      int sensorValue2= analogRead(A2);
      int sensorValue3= analogRead(A3);
      int sensorValue4= analogRead(A4);
  
      float distance1;
      float distance2; 
      float distance3; 
      float distance4; 
  
      float voltage1 = sensorValue1 * (5.0 / 511.0);  
      float voltage2 = sensorValue2 * (5.0 / 511.0); 
      float voltage3 = sensorValue3 * (5.0 / 511.0); 
      float voltage4 = sensorValue4 * (5.0 / 511.0) ; 
    
      distance1 = (voltage1 * 511 / 5 / 2) * 0.0254 ;
      distance2 = (voltage2 * 511 / 5 / 2) * 0.0254 ;
      distance3 = (voltage3 * 511 / 5 / 2) * 0.0254 ;
      distance4 = (voltage4 * 511 / 5 / 2) * 0.0254 ;
      
    
      
      if ((distance3 >=0.3 && distance3 <=0.5))   
     { 
       lcd.clear(); 
       lcd.setCursor(0, 0);
       lcd.print("Turn Straight");
       lcd.setCursor(0, 1);
       lcd.print("and Move Forward");
       
     
        
          Serial.print ("Turn your steering into straight and move forward ");
          Serial.print(distance1);
          Serial.print(" m, ");
          Serial.print(distance2);
          Serial.print(" m, ");
          Serial.print(distance3);
          Serial.print(" m, ");
          Serial.print(distance4);
          Serial.print(" m");
          Serial.println();
      
 
   //delay(3000);
       
      return gotparking=4;
     }
     
       else
       {
         lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("BackwarD");
         
           Serial.print ("Park Again01, ");
           Serial.print(distance1);
           Serial.print(" m, ");
           Serial.print(distance2);
           Serial.print(" m, ");
           Serial.print(distance3);
           Serial.print(" m, ");
           Serial.print(distance4);
           Serial.print(" m");
           Serial.println();
    
 
   //delay(3000);
      return gotparking=3;
         }
    }}
    
    



void loop()                               
{
   space();
   
   fulleft();
   
   fullright();
   
   forward();
   
 
   while(gotparking==4){
     
     lcd.clear(); 
     lcd.setCursor(0, 0);
     lcd.print("Parking Complete");
       
     
        
         Serial.print ("Parking Completed! XD");
         Serial.print(distance1);
         Serial.print(" m, ");
         Serial.print(distance2);
         Serial.print(" m, ");
         Serial.print(distance3);
         Serial.print(" m, ");
         Serial.print(distance4);
         Serial.print(" m");
         Serial.println();
      
 
   //delay(3000);
           
   }
}

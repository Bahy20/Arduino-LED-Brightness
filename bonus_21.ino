// C++ code
//
 int i = 0 ;
void setup()
{
   pinMode (9 , OUTPUT );
  
}

void loop()
{for ( i = 0 ; i<=255 ; i+=5 ){
analogWrite(9 , i )  ;
delay (100);
}
 if( analogRead(9)==255 ){
   digitalWrite(9,HIGH);
   delay(1000);
 }
 for ( i = 255 ; i>=0 ; i-=5 ){
analogWrite(9 , i )  ;
delay (100) ;
 }
}
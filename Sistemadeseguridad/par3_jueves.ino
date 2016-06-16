#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
int led = 13;             //Led que se activara con el sensor
int led2 = 12;  

const int Pin = 2;//pin para pulsador
const int Pin2 = 3;//pin para pulsador 2
int  valorp= 0;//captura el valor del pulsador
int  valorp2= 0;//captura el valor del pulsador2
int cont1=0;
int cont2=0;
int con=0;
int pir=4;
int valorPir=0;
void setup()  { 
  Serial.begin(9600);    // inicia el puerto serial para comunicacion con el Bluetooth

  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
    
      pinMode(Pin, INPUT);//modo del pulsador
     pinMode(Pin2, INPUT);//modo del pulsador 2
  myservo.attach(11);  // attaches the servo on pin 9 to the servo object 
    pinMode(pir, INPUT);//modo del pulsador
    delay(1000);
 } 
 
void loop()  { 
 
   
                 // digitalWrite(led2, HIGH); 
               valorPir=digitalRead(pir);
            //  myservo.write(0);
  
 
           valorp = digitalRead(Pin);  //lectura digital de pin     
     valorp2 = digitalRead(Pin2);  //lectura digital de pin 2  
if (valorp == HIGH) {
  
cont1=cont1+1;
 //delay(100);

   Serial.println(cont1); 

  delay(200);
  
      }
    if (valorp2 == HIGH) {
 cont2=cont2+1;

   Serial.println(cont2); 
   delay(200);

 
      } 
    int ver=0;
   if(cont1==3 && cont2==2){
   
    //SE ENCIENDE Y APAGA FOCO VERDE
   digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
    myservo.write(180); //se le manda los valores a el servo
  delay(2000);
   cont1=0;
   cont2=0;
   } 
 
     if(cont1==4 && cont2==3){
     
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
   
  
    myservo.write(0); //se le manda los valores a el servo
     cont1=0;
   cont2=0;
   } 
 
   if(cont1>4){
   cont1=0;
   digitalWrite(led2, HIGH);
    digitalWrite(led, LOW);
 }
   if(cont2>3){
   cont2=0;
   digitalWrite(led2, HIGH);
   digitalWrite(led, LOW);
 }
 if(valorPir==HIGH){
       Serial.println(valorPir); 
        Serial.println("movimiento detectado"); 
          digitalWrite(led2, HIGH);
          delay(500);
           digitalWrite(led2, LOW);
            delay(500);
             digitalWrite(led2, HIGH);
          delay(500);
           digitalWrite(led2, LOW);
            delay(500);
 }
}
   

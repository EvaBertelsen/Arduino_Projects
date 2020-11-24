int a = 1; 

int b = 2; 

int c = a + b; 

long interval = 1000; 

long previousmillis = 0; 

  

int Reset = 0;  

void setup() { 


Serial.begin(9600); 

 } 

 void loop() { 

     unsigned long currentmillis = millis(); 

  if( currentmillis - previousmillis > interval){ 

    previousmillis = currentmillis; 

   Serial.println(c); 

   } 

 } 

 


int LED = D7; 

int Buttom = D6; 

void setup() { 

  pinMode(LED, OUTPUT);      

  pinMode(Buttom, INPUT); 

} 

  

void loop() { 

    if (digitalRead(Buttom) == LOW){ 

    digitalWrite(LED, HIGH);} 

else{ 

digitalWrite(LED, LOW);} 

} 

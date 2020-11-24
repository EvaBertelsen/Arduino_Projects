char Name[] = "Name"; //Sets the name 

int timer = 10000; //Sets the timer 

unsigned long counter = 0; //Starts the count 

void setup() { 

  // put your setup code here, to run once: 

Serial.begin(9600); //enables printing to serial monitor 

} 

  

void loop() { 

  // put your main code here, to run repeatedly: 

if (millis() - counter > timer); //millis - 0 > 10000 = false.(first time) millis - previousMillis > 10000 (timer) = false(second time). Millis - PreviousMillis > 10000 = true (eventually).  

  

{ 

  Serial.print(Name); //print Name to serial monitor 

  counter = millis(); //update the counter with the current millis count. 

  } 

} 

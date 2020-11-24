const int pbuttonPin = 6;
const int relayPin = 5;


int val = 0; 
int lightON = 0;
int pushed = 0;



void setup() {
  Serial.begin(9600);
  pinMode(pbuttonPin, INPUT_PULLUP); 
  pinMode(relayPin, OUTPUT);
  

}

void loop() {
  val = digitalRead(pbuttonPin);
  

  
//Relay 1
  if(val == HIGH && lightON == LOW){

    pushed = 1-pushed;
    delay(100);
  }    
  lightON = val;

    if(pushed == HIGH){
      Serial.println("Light On");
      digitalWrite(relayPin, LOW);
    }else{
      Serial.println("Light off");
      digitalWrite(relayPin, HIGH);
    }       

}

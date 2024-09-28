#define RELAY1 2
#define RELAY2 3
#define RELAY3 4
#define RELAY4 5

char incomingData;

void setup() {
  Serial.begin(9600);


  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);
}

void loop() {
  if (Serial.available() > 0) {
    incomingData = Serial.read();

    
    switch (incomingData) {
      case '1':
        digitalWrite(RELAY1, LOW); 
        break;
      case '2':
        digitalWrite(RELAY1, HIGH);
        break;
      case '3':
        digitalWrite(RELAY2, LOW); 
        break;
      case '4':
        digitalWrite(RELAY2, HIGH);
        break;
      case '5':
        digitalWrite(RELAY3, LOW);  
        break;
      case '6':
        digitalWrite(RELAY3, HIGH); 
        break;
      case '7':
        digitalWrite(RELAY4, LOW); 
        break;
      case '8':
        digitalWrite(RELAY4, HIGH);
        break;
      default:
        break;
    }
  }
}

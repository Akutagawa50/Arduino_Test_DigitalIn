uint8_t pin[]={32,33,34,35,39};

void setup() {
  Serial.begin(115200);
  for(int i=0; i<sizeof(pin)/sizeof(pin[0]); i++)
    pinMode(pin[i], INPUT);
}

void loop() {
  for(int i=0; i<sizeof(pin)/sizeof(pin[0]); i++){
    if(digitalRead(pin[i])){
      Serial.print(String(pin[i]) + ", ");
    }
  }
  Serial.println();
  delay(500);
}

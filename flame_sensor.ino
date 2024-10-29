
#define FLAME_SENSOR_PIN 7
#define BUZZER_PIN 8

void setup() {
  
  Serial.begin(9600);
  
 
  pinMode(FLAME_SENSOR_PIN, INPUT);
  

  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  
  int flameValue = digitalRead(FLAME_SENSOR_PIN);
  

  Serial.print("Flame Sensor Value: ");
  Serial.println(flameValue);
  
  
  if (flameValue==1) { 
    
    digitalWrite(BUZZER_PIN, LOW);
    Serial.println("Flame not Detected!");
  } else {
  
    digitalWrite(BUZZER_PIN,HIGH);
    Serial.println(" Flame Detected");
  }
  
  
  delay(1000);
}

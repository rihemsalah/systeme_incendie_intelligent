#define  flamePin 2
#define  ledPin  12

int  flame;

void setup() {
   Serial.begin(9600);
 
   pinMode(flamePin, INPUT);
   pinMode(ledPin, OUTPUT);
}

void loop() {
   flame = digitalRead(flamePin);

   Serial.print("Flame Sensor - ");
   Serial.println(flame);

   if (flame == HIGH)
      digitalWrite(ledPin, HIGH);
   else
      digitalWrite(ledPin, LOW);
}

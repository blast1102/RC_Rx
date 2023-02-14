
#define Rx0_pin 34
#define Rx1_pin 35
#define Rx2_pin 36
#define Rx3_pin 37
#define Rx4_pin 38
#define Rx5_pin 39
#define Rx6_pin 40
#define Rx7_pin 41

unsigned long pulseInTimeBegin0 = micros();
unsigned long pulseInTimeEnd0 = micros();
unsigned long pulseInTimeBegin1 = micros();
unsigned long pulseInTimeEnd1 = micros();
unsigned long pulseInTimeBegin2 = micros();
unsigned long pulseInTimeEnd2 = micros();
unsigned long pulseInTimeBegin3 = micros();
unsigned long pulseInTimeEnd3 = micros();
unsigned long pulseInTimeBegin4 = micros();
unsigned long pulseInTimeEnd4 = micros();
unsigned long pulseInTimeBegin5 = micros();
unsigned long pulseInTimeEnd5 = micros();
unsigned long pulseInTimeBegin6 = micros();
unsigned long pulseInTimeEnd6 = micros();
unsigned long pulseInTimeBegin7 = micros();
unsigned long pulseInTimeEnd7 = micros();

long Rx0 = 0;
long Rx1 = 0;
long Rx2 = 0;
long Rx3 = 0;
long Rx4 = 0;
long Rx5 = 0;
long Rx6 = 0;
long Rx7 = 0;

unsigned long Time;
unsigned long Timer;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(Rx0_pin), Interrupt0, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Rx1_pin), Interrupt1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Rx2_pin), Interrupt2, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Rx3_pin), Interrupt3, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Rx4_pin), Interrupt4, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Rx5_pin), Interrupt5, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Rx6_pin), Interrupt6, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Rx7_pin), Interrupt7, CHANGE);
  Time = millis();
  
}

void loop() {
  Timer = millis() - Time;
  digitalWrite(13, LOW);
  if (Timer >= 1000) {
    Time = millis();
    digitalWrite(13, HIGH);
    Serial.print("Rx0   ");
      Serial.println(Rx0);
        Serial.print("Rx1   ");
          Serial.println(Rx1);
            Serial.print("Rx2   ");
              Serial.println(Rx2);
                Serial.print("Rx3   ");
                  Serial.println(Rx3);
                    Serial.print("Rx4   ");
                      Serial.println(Rx4);
                        Serial.print("Rx5   ");
                          Serial.println(Rx6);
                            Serial.print("Rx6   ");
                              Serial.println(Rx6);
                                Serial.print("Rx7   ");
                                  Serial.println(Rx7);
                                    Serial.println("////////////////////////////////////");  
  }
}

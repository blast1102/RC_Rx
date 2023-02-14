// Pulse length measurement based on interrupt high and low for 8 Axis

void Interrupt0() //0000000000000000000000000
{
  if (digitalRead(Rx0_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin0 = micros();
  }
  else {
    // stop measuring
        pulseInTimeEnd0 = micros();
    Rx0 = pulseInTimeEnd0 - pulseInTimeBegin0;
  }
}
void Interrupt1() //11111111111111111111111111
{
  if (digitalRead(Rx1_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin1 = micros();
  }
  else {
    // stop measuring
    pulseInTimeEnd1 = micros();
    Rx1 = pulseInTimeEnd1 - pulseInTimeBegin1;
  }
}

void Interrupt2() //2222222222222222222222222
{
  if (digitalRead(Rx2_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin2 = micros();
  }
  else {
    // stop measuring
    pulseInTimeEnd2 = micros();
    Rx2 = pulseInTimeEnd2 - pulseInTimeBegin2;
      }
}

void Interrupt3() //3333333333333333333333333
{
  if (digitalRead(Rx3_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin3 = micros();
  }
  else {
    // stop measuring
    pulseInTimeEnd3 = micros();
    Rx3 = pulseInTimeEnd3 - pulseInTimeBegin3;
      }
}


void Interrupt4() //444444444444444444444444
{
  if (digitalRead(Rx4_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin4 = micros();
  }
  else {
    // stop measuring
        pulseInTimeEnd4 = micros();
    Rx4 = pulseInTimeEnd4 - pulseInTimeBegin4;
  }
}
void Interrupt5() //5555555555555555555555555
{
  if (digitalRead(Rx5_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin5 = micros();
  }
  else {
    // stop measuring
    pulseInTimeEnd5 = micros();
    Rx5 = pulseInTimeEnd5 - pulseInTimeBegin5;
  }
}

void Interrupt6() //666666666666666666666666
{
  if (digitalRead(Rx6_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin6 = micros();
  }
  else {
    // stop measuring
    pulseInTimeEnd6 = micros();
    Rx6 = pulseInTimeEnd6 - pulseInTimeBegin6;
      }
}

void Interrupt7() //7777777777777777777777777
{
  if (digitalRead(Rx7_pin) == HIGH) {
    // start measuring
    pulseInTimeBegin7 = micros();
  }
  else {
    // stop measuring
    pulseInTimeEnd7 = micros();
    Rx7 = pulseInTimeEnd7 - pulseInTimeBegin7;
      }
}
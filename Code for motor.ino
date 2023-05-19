int val;
#define MOTOR1 11
#define MOTOR2 12  

void setup() {

   Serial.begin(9600);
    pinMode (MOTOR1, OUTPUT); 
    pinMode (MOTOR2, OUTPUT); 

}

void loop()
{
if (Serial.available())
{
  // Serial.print(0);
    int lp = Serial.readString().toInt();
    for (int spd = 100; spd >= 80; spd--)
    {
      Serial.print(spd);
      analogWrite(MOTOR1, spd);
      digitalWrite(MOTOR2, LOW);
      Serial.print(" ");
      delay(1000); 
    }
  // val = Serial.readString().toInt();
  //   if(val>=0){
  //   if (val <=255)
  //   {
  //   Serial.print(val);
  //   analogWrite(MOTOR1, val);
  //   digitalWrite(MOTOR2,LOW);
  //   }
  //   } else{
  //     if (val >=-255)
  //   {
  //   Serial.print(val);
  //   analogWrite(MOTOR1, -val);
  //   digitalWrite(MOTOR2,HIGH);
  //   }
  //   }
  }
}
int DA=A0;
int sensorValue=0;
void setup(){
Serial.begin(9600);//We set the baudrate to 9600.
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop(){
sensorValue=analogRead(DA);
if(sensorValue>200){
digitalWrite(2,HIGH);
if(sensorValue>185)
 {
     digitalWrite(3,HIGH);
     Serial.print(sensorValue);
     Serial.print("\n");
    }
    else{
      digitalWrite(3,LOW);
    }
    if(sensorValue>195){
      digitalWrite(4,HIGH);
      Serial.print(sensorValue);
      Serial.print("\n");
    }
    else{
      digitalWrite(4,LOW);
    }
    if(sensorValue>205){
      digitalWrite(5,HIGH);
      Serial.print(sensorValue);
      Serial.print("\n");
    }
    else{
      digitalWrite(5,LOW);
    }
    if(sensorValue>215){
      digitalWrite(6,HIGH);
      Serial.print(sensorValue);
      Serial.print("\n");
    }
    else{
      digitalWrite(6,LOW);
    }
  }

}

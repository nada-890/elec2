int enA = 10;
int in1 = 7;
int in2 = 6;

void setup() {

 pinMode(enA, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
}

void loop() {

 analogWrite(enA, 255);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 delay(5000);
  
 
 analogWrite(enA, 0.7*255);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 delay(5000);
  

 analogWrite(enA, 255);
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 delay(5000);
 



  
 analogWrite(enA, 0.5*255);
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 delay(5000);
  


}
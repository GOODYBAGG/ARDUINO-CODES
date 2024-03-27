int in1 = 3;
int in2 = 4;
int in3 = 2;
int in4 = 6;

int ENA = 7;
int ENB = 8;


 void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (in1, OUTPUT);
pinMode (in2, OUTPUT);
pinMode (in3, OUTPUT);
pinMode (in4, OUTPUT);
pinMode (ENA, OUTPUT);
pinMode (ENB, OUTPUT);


}
void forward () {
analogWrite (ENA , 255);
analogWrite (ENB , 255);


  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
forward();
}

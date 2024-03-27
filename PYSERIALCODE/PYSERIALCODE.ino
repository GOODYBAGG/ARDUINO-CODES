char x;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.setTimeout(1);
 pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
x = Serial.read();

if (x == 'f'){
  Serial.println("do not eject");
}
else if(x == 't') {
  Serial.println("eject danu danu");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);

}
}
}
void LED() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}

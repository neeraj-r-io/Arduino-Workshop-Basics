const int piezo = 9;
const int pot = A0;

void setup() {
pinMode(piezo, OUTPUT);
}

void loop(){
int potValue = anlogRead(pot);
int volume = map(potValue,0,1023,0,255);
analogWrite(piezo,volume);
delay(10);
}

void setup() {
pinMode(D1,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D5,INPUT);
}

void loop() {
int tombol=digitalRead(D5);
 if(tombol==1){
   digitalWrite(D1,HIGH);
   digitalWrite(D3,HIGH);
delay(100);
 }
else{
   digitalWrite(D1,LOW);
   digitalWrite(D3,LOW);
delay(100);
 }
 
}
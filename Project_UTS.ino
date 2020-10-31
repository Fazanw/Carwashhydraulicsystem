String voice;
void setup() {
Serial.begin(9600);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
while(Serial.available()){
  delay(3);
  char c = Serial.read();
  voice+=c;}


if(voice.length() >0){
  Serial.println(voice);
  if(voice == "hydraulic one pump")
  {digitalWrite(6, HIGH);}
  else if(voice == "hydraulic one deflate")
  {digitalWrite(6, LOW);}
  else if(voice == "hydraulic two pump")
  {digitalWrite(5, HIGH);}
  else if(voice == "hydraulic two deflate")
  {digitalWrite(5, LOW);}
  else if(voice == "hydraulic three pump")
  {digitalWrite(4, HIGH);}
  else if(voice == "hydraulic three deflate")
  {digitalWrite(4, LOW);}
  else if(voice == "hydraulic all pump")
  {digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);}
  else if(voice == "hydraulic all deflate")
  {digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  digitalWrite(6, LOW);}
  voice = "";}
}

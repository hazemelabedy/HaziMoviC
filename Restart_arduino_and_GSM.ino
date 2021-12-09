
int restboard = 8 ; 
int restgsm = 9;
void setup() {

}

// the loop function runs over and over again forever
void loop() {
  pinMode (restgsm, OUTPUT); 
  digitalWrite(restgsm, LOW);  // restart GSM Module.
  delay(500);
  pinMode (restboard, INPUT); 
  delay (60000);  //Wait 1 Minute For Restarting Arduino 
  pinMode (restboard, OUTPUT);
  digitalWrite(restboard, LOW);  // restart Arduino board.
  delay(500);
  pinMode (restboard, INPUT); 
  delay (14400000);  //Wait 4 Hours For Nsxt Restart   
}

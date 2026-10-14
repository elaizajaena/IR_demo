
const byte IR = 36;

int counter =0;
int input =0;



void setup() {
 pinMode(IR, INPUT);
 Serial.begin(9600);

}

void loop() {
  input = digitalRead(IR);
  if(input == 0){
    counter++;   
  }
  Serial.printf("Movement Detected: %d\n", counter);
  delay(500);
}

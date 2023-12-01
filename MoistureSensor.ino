//Sensor 1
const int dryOne = 620; // value for dry sensor
const int wetOne = 220; // value for wet sensor
//Sensor 2
const int dryTwo = 620; // value for dry sensor
const int wetTwo = 220; // value for wet sensor
//Sensor 3
const int dryThree = 620; // value for dry sensor
const int wetThree = 220; // value for wet sensor
//Sensor 4
const int dryFour = 620; // value for dry sensor
const int wetFour = 220; // value for wet sensor
//Sensor 5
const int dryFive = 620; // value for dry sensor
const int wetFive = 220; // value for wet sensor
//Sensor 6
const int drySix = 620; // value for dry sensor
const int wetSix = 220; // value for wet sensor





void setup() {
  Serial.begin(9600);
 
}

void loop() {
//  Serial.println(analogRead(A0));
// delay(100);
  //Sensor 1
  int sensorValOne = analogRead(A0);
  int percentageHumididyOne = map(sensorValOne, wetOne, dryOne, 100, 0); 
//  Serial.print("Zone 1: ");
  Serial.print("{\"SENSOR1\":");
  Serial.print(percentageHumididyOne);
 // Serial.println("%");

  //Sensor 2
  int sensorValTwo = analogRead(A1);
  int percentageHumididyTwo = map(sensorValTwo, wetTwo, dryTwo, 100, 0); 
//  Serial.print("Zone 2: ");
  Serial.print(",\"SENSOR2\":");
  Serial.print(percentageHumididyTwo);
 // Serial.println("%");

  //Sensor 3
  int sensorValThree = analogRead(A2);
  int percentageHumididyThree = map(sensorValThree, wetThree, dryThree, 100, 0); 
 // Serial.print("Zone 3: ");
  Serial.print(",\"SENSOR3\":");
  Serial.print(percentageHumididyThree);
  //Serial.println("%");

  //Sensor 4
  int sensorValFour = analogRead(A3);
  int percentageHumididyFour = map(sensorValFour, wetFour, dryFour, 100, 0); 
//  Serial.print("Zone 4: ");
  Serial.print(",\"SENSOR4\":");
  Serial.print(percentageHumididyFour);
 // Serial.println("%");
   delay(2000);
   
  //Sensor 5
  int sensorValFive = analogRead(A4);
  int percentageHumididyFive = map(sensorValFive, wetFive, dryFive, 100, 0); 
//  Serial.print("Zone 5: ");
  Serial.print(",\"SENSOR5\":");
  Serial.print(percentageHumididyFive);
  //Serial.println("%");

   delay(2000);
   
  //Sensor 6
  int sensorValSix = analogRead(A5);
  int percentageHumididySix = map(sensorValSix, wetSix, drySix, 100, 0); 
//  Serial.print("Zone 6: ");
  Serial.print(",\"SENSOR6\":");
  Serial.print(percentageHumididySix);
 // Serial.println("%");
  Serial.println("}");
   delay(2000);
}

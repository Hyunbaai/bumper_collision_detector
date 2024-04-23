void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  float sensor_volt;
  float sensorValue = 0;
  float pressure_value_PSI = 0;
  float pressure_range_PSI = 0.15;
  int pressure_value_PA = 0;
  int pressure_range_PA = 1034;

  for(int x=0; x<=100; x++)
  {
    sensorValue = sensorValue + analogRead(A0);
  }

  sensorValue = sensorValue/100.0;
  sensor_volt = sensorValue/1024*5.0;
  pressure_value_PSI = ( sensor_volt - 0.5 ) * (pressure_range_PSI / (5*0.8));
  pressure_value_PA = ( sensor_volt - 0.5 ) * (pressure_range_PA / (5*0.8));

  // Serial.print("sensor_volt=");
  // Serial.print(sensor_volt);
  // Serial.print("V      ");

  // Serial.print("pressure_value=");
  // Serial.print(pressure_value_PSI);
  // Serial.print("psi      ");

  // Serial.print("pressure_value=");
  Serial.print(pressure_value_PA);
  // Serial.print("pa      ");
  Serial.println();

  delay(100);

}
